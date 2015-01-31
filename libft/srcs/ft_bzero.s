;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 13:33:54 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/24 17:29:14 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_bzero

section .text

_ft_bzero:
	xor			rcx, rcx			; set rcx at 0, xor faster than (sub		rcx, rcx)

loop:
	cmp			rcx, rsi			; Compare rcx and the size in rsi
	jge			end					; jump to the label end if rcx >= rsi
	mov			byte [rdi + rcx], 0	; set the rdi position at 0
	inc			rcx					; add 1 to rcx
	jmp			loop				; jump to the begining of the label loop to create a loop

end:
	ret