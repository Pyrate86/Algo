/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 15:04:28 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 15:04:35 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	swap(t_pile **p)
{
	t_pile	*tmp;

	if (p != NULL && (*p)->prev != NULL)
	{
		tmp = *p;
		*p = (*p)->prev;
		tmp->prev = (*p)->prev;
		(*p)->prev = tmp;
	}
}

void	push(t_pile **a, t_pile **b)
{
	t_pile	*tmp_a;
	t_pile	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	if (*a != NULL)
	{
		*a = (*a)->prev;
		*b = tmp_a;
		(*b)->prev = tmp_b;
	}
}

void	rotate(t_pile **p)
{
	t_pile	*tmp;

	if (p != NULL && (*p)->prev != NULL)
	{
		tmp = *p;
		while ((*p)->prev != NULL)
			*p = (*p)->prev;
		(*p)->prev = tmp;
		*p = tmp->prev;
		tmp->prev = NULL;
	}
}

void	r_rotate(t_pile **p)
{
	t_pile	*tmp;
	t_pile	*tmp_prev;

	if (p != NULL && (*p)->prev != NULL)
	{
		tmp = *p;
		tmp_prev = *p;
		while (tmp->prev != NULL)
		{
			tmp_prev = tmp;
			tmp = tmp->prev;
		}
		tmp->prev = *p;
		*p = tmp;
		tmp_prev->prev = NULL;
	}
}
