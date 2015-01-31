;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:05:12 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:26:36 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isascii

section .text

_ft_isascii:
	xor			rax, rax

	cmp			rdi, 0
	jl			exit
	cmp			rdi, 127
	jg			exit

true:
	xor			rax, 1

exit:
	ret