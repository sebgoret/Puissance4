;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_puts_fd.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/28 12:15:47 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/30 16:04:19 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_puts_fd

extern _ft_strlen

section .text

_ft_puts_fd:
	cmp				rsi, 0					; check if the given fd > 0
	jne				error					; jump if fd <= 0 to the label error
	cmp				rdi, 0x0				; check if rdi is null
	jne				write					; jump if not null to the label write

null_case:
	mov				rax, rdi				; temp save rdi (char *)
	mov				rdi, rsi				; set fd as output
	lea				rsi, [rel null]			; set rsi as null
	mov				rdx, 7					; we'll write 7 chars
	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall									; call the syscall in rax
	jc				error					; jump if the carry flag is set (carry flag used to set errors)
	ret

write:
	call			_ft_strlen				; call my ft_strlen function
	mov				rdx, rax				; move the size of rdi returned by strlen in rax into rdx (3rd parameter)
	mov				rax, rsi				; save the fd (rsi)
	mov				rsi, rdi				; copy the first arg in the second argument
	mov				rdi, rax				; retrieve the fd
	push			rdi

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall									; call the syscall in rax
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	pop				rdi
	mov				rsi, 10
	mov				rdx, 1

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall									; call the syscall in rax
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret										; return the write return via rax

error:
	mov				rax, -1					; set rax to -1 to return error
	ret										; return -1 as error


segment .data

null:			db "(null)", 10				; declare null as "(null)"
