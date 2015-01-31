;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/26 19:59:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 15:02:55 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strdup

extern _ft_strlen
extern _malloc

section .text

_ft_strdup:
	push		rdi						; save rdi pointer
	call		_ft_strlen
	mov			rdi, rax
	inc			rdi
	mov			rcx, rax
	push		rcx						; save the size in the stack

	call		_malloc					; malloc the size in rax
	cmp			rax, 0x0				; cmp rax and null
	je			exit

	pop			rcx						; retrieve rcx
	pop			rsi						; retrieve rdi
	mov			rdi, rax
	rep			movsb					; make coffee... (cpy rsi in rdi and)
	mov			byte [rdi + rcx], 0		; final \0

exit:
	ret