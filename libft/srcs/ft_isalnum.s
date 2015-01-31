;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/01/23 14:43:50 by sebgoret          #+#    #+#              ;
;    Updated: 2015/01/31 14:25:02 by sebgoret         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalnum

extern _ft_isalpha, _ft_isdigit

section .text

_ft_isalnum:
	call		_ft_isdigit
	cmp			rax, 1
	je			exit

	call		_ft_isalpha

exit:
	ret