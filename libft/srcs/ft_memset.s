;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memset.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 13:36:57 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:58:17 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_memset

section .text

_ft_memset:
	push		rdi				; push rdi on the stack to save the pointer
	mov			rax, rsi 		; copy the char (in the register rsi (2nd arg)) in the temp register rax
	mov			rcx, rdx		; copy the size (in the register rdx (3rd arg)) in the register rcx
	cld							; reset direction flag to default
	rep			stosb			; replace each byte of rdi by the rax content

	pop			rdi				; retrieve the pointer
	mov			rax, rdi		; move rdi dans rax
	ret							; return rax