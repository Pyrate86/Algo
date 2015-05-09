; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:43:03 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:45:09 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section	.text
	global	ft_tolower
	extern	ft_isupper

ft_tolower:
	call	ft_isupper
	cmp		rax, 0
	je		end
	add		rdi, 32

end
	mov		rax, rdi
	ret