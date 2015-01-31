;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/26 19:59:34 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/28 13:39:27 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strdup

extern _ft_strlen
extern _malloc

section .text

_ft_strdup:
	push		rdi						; save rdi pointer
	call		_ft_strlen				; get the rdi size
	mov			rdi, rax				; move the size in rdi
	inc			rdi						; size + 1
	mov			rcx, rax				; save the size
	push		rcx						; save the size in the stack

	call		_malloc					; malloc the size in rax
	cmp			rax, 0x0				; cmp rax and null
	je			exit					; return null

	pop			rcx						; retrieve rcx
	pop			rdi						; retrieve rdi
	mov			rsi, rdi				; set rsi as rdi
	mov			rdi, rax				; set rdi as rax
	rep			movsb					; make coffee... (cpy rsi in rdi and set rax to rdi)
	mov			byte [rdi + rcx], 0		; final \0

exit:
	ret