; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:58:37 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 17:02:40 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_strcat

ft_strcat:
	mov		r9, rdi

loop:
	cmp		byte [rdi], 0
	je		cpy
	inc		rdi
	jmp		loop

cpy:
	cmp		byte [rsi], 0
	je		end
	mov		rax, [rsi]
	mov		[rdi], al
	inc		rdi
	inc		rsi
	jmp		cpy

end:
	mov		byte [rdi], 0
	mov		rax, r9
	ret
