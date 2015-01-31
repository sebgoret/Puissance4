;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putchar_fd.s                                    :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:07:46 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:42:15 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_putchar_fd

section .bss

char:
	resb		1

section .text

_ft_putchar_fd:
	mov				rdx, 1
	lea				rcx, [rel char]
	mov				[rcx], dil
	mov				rdi, rsi
	mov				rsi, rcx

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret

error:
	mov				rax, -1
	ret