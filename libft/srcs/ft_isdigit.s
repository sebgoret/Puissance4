;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:41:42 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:07:38 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isdigit

section .text

_ft_isdigit:
	xor			rax, rax		; set rax to false (0)

	cmp			rdi, '0'		; Compare the rdi value with the char '0'
	jl			exit			; if rdi < '0' jump to label exit
	cmp			rdi, '9'		; Compare the rdi value with the char '9'
	jg			exit			; if rdi > '9' jump to label exit

true:
	inc			rax				; set rax to true (1)

exit:
	ret							; return rax as true or false