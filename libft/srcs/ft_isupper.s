;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:26:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 20:48:12 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isupper

section .text

_ft_isupper:
	xor			rax, rax

	cmp			rdi, 'A'
	jl			exit
	cmp			rdi, 'Z'
	jg			exit

true:
	xor			rax, 1

exit:
	ret