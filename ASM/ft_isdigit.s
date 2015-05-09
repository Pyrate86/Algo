; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:08:32 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:13:57 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_isdigit

ft_isdigit:
	cmp		rdi, byte '0'
	jl		ko
	cmp		rdi, byte '9'
	jg		ko

ok:
	mov		rax, 1
	ret

ko:
	mov		rax,0
	ret