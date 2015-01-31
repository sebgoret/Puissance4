;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 15:58:40 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 15:04:19 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strlen

section .text

_ft_strlen:
	cmp			rdi, 0x0
	je			null

	push		rdi				; save rdi in the stack
	xor			rcx, rcx
	not			rcx

	xor			rax, rax
	repnz		scasb			; after this string operator, rcx = - 1 - ft_strlen

	not			rcx
	dec			rcx
	mov			rax, rcx
	pop			rdi
	ret

null:
	xor			rax, rax
	ret