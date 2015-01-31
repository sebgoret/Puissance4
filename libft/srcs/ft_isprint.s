;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:08:29 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:09:52 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isprint

section .text

_ft_isprint:
	mov			rax, 0			; set rax to false (0)

	cmp			rdi, 32			; Compare the rdi value with the char 0
	jl			exit			; if rdi < 32 jump to label exit
	cmp			rdi, 126		; Compare the rdi value with the char 126
	jg			exit			; if rdi > 126 jump to label exit

true:
	inc			rax				; set rax to true (1)

exit:
	ret							; return rax as true or false