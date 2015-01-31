;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:43:50 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/26 19:28:30 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalnum

extern _ft_isalpha, _ft_isdigit

section .text

_ft_isalnum:
	call		_ft_isdigit		; call my ft_isdigit function
	cmp			rax, 1			; Compare if rax has been set as 1 if rdi is a digit
	je			exit			; if (rax == 1) jump to exit

	call		_ft_isalpha		; call my ft_isalpha function

exit:
	ret							; return the value in rax