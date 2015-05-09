; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_islower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 03:00:14 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 03:48:44 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_islower

ft_islower:
	cmp	rdi,0
	je	ko
	cmp	rdi, byte 'a'
	jl	ko
	cmp	rdi, byte 'z'
	jg	ko

ok:
	mov	rax,1
	ret

ko:
	mov	rax,0
	ret
