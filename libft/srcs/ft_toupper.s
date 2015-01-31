;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:10:06 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/23 15:16:43 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_toupper

section .text

_ft_toupper:
	mov			rax, rdi		; set rax to rdi

	cmp			rdi, 'a'		; Compare the rdi value with the char 'a'
	jl			L1				; if rdi < 'a' jump to label L1
	cmp			rdi, 'z'		; Compare the rdi value with the char 'z'
	jle			L2				; if rdi <= 'z' jump to label L2

L1:
	ret							; return rax as rdi

L2:
	sub			rax, 32			; substract 32 to the char in rax (A = 65, a = 97) 97 - 65 = 32
	ret							; return the new upper char