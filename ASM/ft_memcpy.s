; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/07/01 18:14:58 by ghilbert          #+#    #+#              ;
;    Updated: 2015/07/01 19:53:09 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global ft_memcpy

ft_memcpy:
	mov		rcx, rdx
	cmp		rdx, 0
	je		null
	mov		rax, rdi
	rep		movsb		; while(rcx--){ rdi[rcx] = rsi[rcx] }

null:
	ret