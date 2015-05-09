; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:46:21 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:55:53 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_bzero

ft_bzero:
	cmp		rsi, 0
	je		end
	mov		[rdi], byte 0
	dec		rsi
	inc		rdi
	jmp		ft_bzero

end:
	ret