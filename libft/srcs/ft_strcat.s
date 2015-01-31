;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/24 15:35:31 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 15:37:29 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strcat

extern _ft_strlen

section .text

_ft_strcat:
	push			rdi									; save the current position of rdi
	call			_ft_strlen							; call my ft_strlen function
	add				rdi, rax							; set rdi to the '\0' position of rdi
	xor				rcx, rcx							; set rcx at 0, xor faster than (sub		rcx, rcx)

loop:
	cmp				byte [rsi + rcx], 0 				; compare the rax position of rcx and 0
	je				end									; jump to the label end if [rsi + rax] == 0
	mov				al, byte [rsi + rcx]				; set the lowest byte of rax (al) as [rsi + rcx]
	mov				byte [rdi + rcx], al				; set the [rdi + rcx] byte to [rsi + rcx] byte in al
	inc				rcx									; increment rcx
	jmp				loop								; jump to the begining of the label loop to create a loop

end:
	pop				rdi									; retrieve the rdi pointer
	mov				rax, rdi							; set rax as rdi pointer
	ret