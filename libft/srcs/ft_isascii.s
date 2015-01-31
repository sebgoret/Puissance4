;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:05:12 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:09:14 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isascii

section .text

_ft_isascii:
	mov			rax, 0			; set rax to false (0)

	cmp			rdi, 0			; Compare the rdi value with the char 0
	jl			exit			; if rdi < 0 jump to label exit
	cmp			rdi, 127		; Compare the rdi value with the char 127
	jg			exit			; if rdi > 127 jump to label exit

true:
	inc			rax				; set rax to true (1)

exit:
	ret							; return rax as true or false