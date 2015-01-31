;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_max.s                                           :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:51:00 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 21:00:24 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_max

section .text

_ft_max:
	xor			rax, rax
	cmp			edi, esi
	jge			first

second:
	mov			eax, esi
	ret

first:
	mov			eax, edi
	ret