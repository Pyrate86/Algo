; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/07/01 16:49:01 by ghilbert          #+#    #+#              ;
;    Updated: 2015/07/01 18:13:47 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_strlen

ft_strlen:
	cmp		rdi, 0
	je		end
	mov		al, 0
	mov		rcx, -1
	repne	scasb    ;Repeat rbi[--rcx] Not Equal al && rcx != 0
	not		rcx
	sub		rcx, 1
	mov		rax, rcx
	ret

end:
	mov rax, 0
	ret