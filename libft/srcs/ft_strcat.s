;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/24 15:35:31 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 18:16:22 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strcat

section .text

_ft_strcat:
	push			rdi							; save the current position of rdi
	xor				rax, rax
	xor				rcx, rcx

size:
	cmp				byte [rdi + rax], 0
	je				loop

inc_size:
	inc				rax
	jmp				size

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