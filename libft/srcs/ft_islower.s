;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_islower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:26:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:48:41 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_islower

section .text

_ft_islower:
	xor			rax, rax

	cmp			rdi, 'a'
	jl			exit
	cmp			rdi, 'z'
	jg			exit

true:
	xor			rax, 1

exit:
	ret