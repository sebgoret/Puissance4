;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:10:06 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:39:12 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_toupper

section .text

_ft_toupper:
	mov			rax, rdi

	cmp			rdi, 'a'
	jl			return
	cmp			rdi, 'z'
	jg			return

upper:
	sub			rax, 32			; sub 32 to the char in rax (A = 65, a = 97) 97 - 65 = 32
	ret

return:
	ret