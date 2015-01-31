;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:26:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 15:08:58 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalpha

section .text

_ft_isalpha:
	xor			rax, rax

	cmp			rdi, 'A'
	jl			exit
	cmp			rdi, 'Z'
	jle			true

	cmp			rdi, 'a'
	jl			exit
	cmp			rdi, 'z'
	jg			exit

true:
	xor			rax, 1

exit:
	ret