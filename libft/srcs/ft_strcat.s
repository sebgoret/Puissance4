;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/24 15:35:31 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:33:50 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strcat

extern _ft_strlen

section .text

_ft_strcat:
	push			rdi							; save the current position of rdi
	call			_ft_strlen
	add				rdi, rax
	xor				rcx, rcx

loop:
	cmp				byte [rsi + rcx], 0
	je				end
	mov				al, byte [rsi + rcx]		; set the lowest byte of rax (al) as [rsi + rcx]
	mov				byte [rdi + rcx], al
	inc				rcx
	jmp				loop

end:
	pop				rdi							; retrieve the rdi pointer
	mov				rax, rdi
	ret