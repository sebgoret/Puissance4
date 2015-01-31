;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putchar.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:06:14 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:42:18 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_putchar

section .bss

char:
	resb		1

section .text

_ft_putchar:
	mov				rdx, 1
	lea				rcx, [rel char]
	mov				[rcx], dil
	mov				rsi, rcx
	mov				rdi, 1

	mov				rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc				error					; jump if the carry flag is set (carry flag used to set errors)

	ret

error:
	mov				rax, -1
	ret
