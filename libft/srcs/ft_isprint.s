;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:08:29 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:27:41 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isprint

section .text

_ft_isprint:
	xor			rax, rax

	cmp			rdi, 32
	jl			exit
	cmp			rdi, 126
	jg			exit

true:
	inc			rax

exit:
	ret