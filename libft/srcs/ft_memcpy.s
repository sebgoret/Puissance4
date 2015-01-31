;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/26 19:52:56 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:29:34 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_memcpy

section .text

_ft_memcpy:
	push		rdi				; save the pointer
	mov			rcx, rdx
	cld							; reset the direction flag
	rep			movsb			; make coffee... (cpy rsi in rdi)
	pop			rdi				; retrieve the pointer

	mov			rax, rdi
	ret