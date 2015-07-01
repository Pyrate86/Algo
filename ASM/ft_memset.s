; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memset.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/07/01 16:43:31 by ghilbert          #+#    #+#              ;
;    Updated: 2015/07/01 21:41:35 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_memset

ft_memset:
	push	rdi
	cmp		rdx, 0
	jle		exit
	cmp		rsi, 0
	je		exit

set:
	mov		rax, rsi
	mov		rcx, rdx
	cld
	rep		stosb		; while(rcx--){ rbx[rcx] = rax }

exit:
	pop		rdi
	mov		rax, rdi
	ret