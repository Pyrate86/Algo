; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:28:17 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:30:36 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global ft_isprint

ft_isprint:
	cmp		rdi, 32
	jl		ko
	cmp		rdi, 126
	jg		ko
	mov		rax, 1
	ret

ko:
	mov 	rax, 0
	ret