;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/26 19:52:56 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/30 18:16:22 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_memcpy

section .text

_ft_memcpy:
	mov			rcx, rdx		; move rdx (size) in rcx to use string rep
	rep			movsb			; make coffee... (cpy rsi in rdi and set rax to rdi)

	ret							; return rax