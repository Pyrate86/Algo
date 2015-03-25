/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 17:08:38 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 17:08:46 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	mv_push(t_mv **mv, char c, void (*ptr_fnc)(t_pile **, t_pile **))
{
	t_mv *new;

	new = (t_mv *)malloc(sizeof(t_mv));
	if (new != NULL)
	{
		new->c = c;
		new->ptr_fnc = ptr_fnc;
		if (*mv == NULL)
			new->next = NULL;
		else
			new->next = *mv;
		*mv = new;
	}
}
void	init(t_mv **mv)
{
	*mv = NULL;
	mv_push(mv, 'a', &(sa));
	mv_push(mv, 'b', &(pa));
	mv_push(mv, 'c', &(ra));
	mv_push(mv, 'd', &(rra));
	mv_push(mv, 'e', &(sb));
	mv_push(mv, 'f', &(pb));
	mv_push(mv, 'g', &(rb));
	mv_push(mv, 'h', &(rrb));
	mv_push(mv, 'i', &(ss));
	mv_push(mv, 'j', &(rr));
	mv_push(mv, 'k', &(rrr));
}