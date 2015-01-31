;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_min.s                                           :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/31 20:51:00 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 21:00:05 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_min

section .text

_ft_min:
	xor			rax, rax
	cmp			edi, esi
	jle			first

second:
	mov			eax, esi
	ret

first:
	mov			eax, edi
	ret