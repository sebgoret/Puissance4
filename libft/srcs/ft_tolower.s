;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:15:26 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/23 15:17:00 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_tolower

section .text

_ft_tolower:
	mov			rax, rdi		; set rax to rdi

	cmp			rdi, 'A'		; Compare the rdi value with the char 'A'
	jl			L1				; if rdi < 'A' jump to label L1
	cmp			rdi, 'Z'		; Compare the rdi value with the char 'Z'
	jle			L2				; if rdi <= 'Z' jump to label L2

L1:
	ret							; return rax as rdi

L2:
	add			rax, 32			; add 32 to the char in rax (A = 65, a = 97) 97 - 65 = 32
	ret							; return the new upper char