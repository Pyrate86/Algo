; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:34:58 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:42:15 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section	.text
	global	ft_toupper
	extern	ft_islower

ft_toupper:
	call	ft_islower
	cmp		rax, 0
	je		end
	sub		rdi, 32

end:
	mov		rax, rdi
	ret