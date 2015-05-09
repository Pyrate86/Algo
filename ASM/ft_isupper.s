; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 02:46:56 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 03:47:50 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_isupper

ft_isupper:
	cmp	rdi,0
	je	ko
	cmp	rdi, byte 'A'
	jl	ko
	cmp	rdi, byte 'Z'
	jg	ko

ok:
	mov	rax,1
	ret

ko:
	mov	rax,0
	ret
