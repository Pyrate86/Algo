; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/09 04:16:42 by ghilbert          #+#    #+#              ;
;    Updated: 2015/05/09 04:21:38 by ghilbert         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	ft_isalnum
	extern	ft_isalpha
	extern	ft_isdigit

ft_isalnum:
	call	ft_isalpha
	cmp		rax,1
	je		ok
	call	ft_isdigit
	cmp		rax,1
	je		ok

ok:
	ret	