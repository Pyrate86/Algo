; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:22:43 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:26:29 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_isascii

ft_isascii:
	cmp		rdi, 0
	jl		ko
	cmp		rdi, 127
	jg		ko
	mov		rax,1
	ret

ko:
	mov		rax, 0
	ret