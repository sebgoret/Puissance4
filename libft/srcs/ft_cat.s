;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_cat.s                                           :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/26 20:15:51 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 20:51:55 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_cat

section .bss

buffer:
	resb	4096

section .text

_ft_cat:
	cmp				rdi, 0				; see if the file descriptor is < 0
	jl				exit				; jump to exit if less than 0

	push			rdi					; save the file descriptor

loop:
	pop				rdi					; retrieve the file descriptor
	lea				rsi, [rel buffer]	; the read buffer as buffer
	mov				rdx, 4096			; set the read size at 4096
	mov				rax, 0x2000003		; 0x200000x => syscall, 3 => read

	syscall								; call the syscall in rax
	jc				exit				; jump if the carry flag is set (carry flag used to set errors)

	cmp				rax, 0				; look if read doesn't read anything
	je				exit				; jump to the end

	push			rdi					; save the file descriptor

	mov				rdi, 1				; set the first parameter as stdout ( fd 1 )
	mov				rdx, rax			; move the read size into rdx

	mov				rax, 0x2000004		; 0x200000x => syscall, 4 => write
	syscall								; call the syscall in rax
	jc				exit				; jump if the carry flag is set (carry flag used to set errors)

	jmp				loop				; jump to the loop label

exit:
	ret