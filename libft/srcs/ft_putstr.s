;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:03:21 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:03:56 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_putstr

section .text

_ft_putstr:
	xor				rax, rax
	cmp				rdi, 0x0				; check if rdi is null
	jne				size

null_case:
	mov				rdi, 1
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
	mov				rsi, rdi
	mov				rdi, 1

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret

error:
	mov				rax, -1
	ret

segment .data

null:			db "(null)", 0ah			; declare null as "(null)"
