;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 13:33:54 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:22:48 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_bzero

section .text

_ft_bzero:
	xor			rcx, rcx

loop:
	cmp			rcx, rsi
	jge			end
	mov			byte [rdi + rcx], 0
	inc			rcx
	jmp			loop

end:
	ret