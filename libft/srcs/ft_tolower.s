;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:15:26 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:38:10 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_tolower

section .text

_ft_tolower:
	mov			rax, rdi

	cmp			rdi, 'A'
	jl			return
	cmp			rdi, 'Z'
	jg			return

lower:
	add			rax, 32			; add 32 to the char in rax (A = 65, a = 97) 97 - 65 = 32
	ret

return:
	ret
