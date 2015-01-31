;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:58:40 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/30 18:18:41 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strlen

section .text

_ft_strlen:
	cmp			rdi, 0x0
	je			null

	push		rdi				; save rdi in the stack
	xor			rcx, rcx		; set rcx at 0, xor faster than (sub		rcx, rcx)
	not			rcx				; set rcx at -1 (0xFFFFFFFF) (because 0 => 0x00000000)

	xor			rax, rax		; set rax at 0, xor faster than (sub		rax, rax)
	repnz		scasb			; rcx = - 1 - ft_strlen

	not			rcx				; set rcx to ft_strlen + 1 (binary complement)
	dec			rcx				; decrement rcx
	mov			rax, rcx		; set rax at rcx value
	pop			rdi				; get back rdi from the stack
	ret							; return rax

null:
	xor			rax, rax
	ret