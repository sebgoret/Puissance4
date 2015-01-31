;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:26:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:05:33 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalpha

section .text

_ft_isalpha:
	xor			rax, rax		; set rax to false (0)

	cmp			rdi, 'A'		; Compare the rdi value with the char 'A'
	jl			exit			; if rdi < 'A' jump to label exit
	cmp			rdi, 'Z'		; Compare the rdi value with the char 'Z'
	jle			true			; if rdi <= 'Z' jump to label true

	cmp			rdi, 'a'		; Compare the rdi value with the char 'a'
	jl			exit			; if rdi < 'a' jump to label exit
	cmp			rdi, 'z'		; Compare the rdi value with the char 'z'
	jg			exit			; if rdi > 'z' jump to label exit

true:
	xor			rax, 1			; set rax to true (1)

exit:
	ret							; return rax as true or false