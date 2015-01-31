;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:04:19 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:05:33 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_putstr_fd

section .text

_ft_putstr_fd:
	cmp				rsi, 0					; check if the given fd > 0
	jne				error
	cmp				rdi, 0x0				; check if rdi is null
	jne				size

null_case:
	mov				rax, rdi
	mov				rdi, rsi
	lea				rsi, [rel null]
	mov				rdx, 6
	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)
	ret

size:
	cmp				byte [rdi + rax], 0
	je				write

inc_size:
	inc				rax
	jmp				size

write:
	mov				rdx, rax
	mov				rax, rsi
	mov				rsi, rdi
	mov				rdi, rax

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret

error:
	mov				rax, -1
	ret


segment .data

null:			db "(null)", 0ah			; declare null as "(null)"