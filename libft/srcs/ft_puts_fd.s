;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_puts_fd.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/28 12:15:47 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:46:44 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_puts_fd

extern _ft_strlen

section .text

_ft_puts_fd:
	cmp				rsi, 0					; check if the given fd > 0
	jne				error
	cmp				rdi, 0x0				; check if rdi is null
	jne				write

null_case:
	mov				rax, rdi
	mov				rdi, rsi
	lea				rsi, [rel null]
	mov				rdx, 7
	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)
	ret

write:
	call			_ft_strlen
	mov				rdx, rax
	mov				rax, rsi
	mov				rsi, rdi
	mov				rdi, rax
	push			rdi

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	pop				rdi
	lea				rsi, [rel bn]
	mov				rdx, 1

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret

error:
	mov				rax, -1
	ret


segment .data

null:			db "(null)", 10				; declare null as "(null)"
bn:				db 10, 0ah