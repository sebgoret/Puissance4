;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memset.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 13:36:57 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:58:47 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_memset

section .text

_ft_memset:
	push		rdi				; push rdi on the stack to save the pointer
	mov			rax, rsi
	mov			rcx, rdx
	cld							; reset direction flag to default
	rep			stosb			; replace each byte of rdi by the rax content

	pop			rax				; retrieve the pointer in rax
	ret