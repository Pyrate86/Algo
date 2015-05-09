; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 02:34:48 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 03:57:46 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_isalpha
	extern	ft_isupper
	extern	ft_islower

ft_isalpha:
	cmp		rdi,0
	je		ok
	call	ft_isupper
	cmp		rax,1
	je		ok
	call	ft_islower
	cmp		rax,1
	je		ok
	ret

ok:
	ret