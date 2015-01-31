;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:41:42 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:27:14 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isdigit

section .text

_ft_isdigit:
	xor			rax, rax

	cmp			rdi, '0'
	jl			exit
	cmp			rdi, '9'
	jg			exit

true:
	xor			rax, 1

exit:
	ret