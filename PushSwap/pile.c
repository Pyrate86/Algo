/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 01:52:15 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:46:34 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pile_push(t_pile **pile, int data)
{
	t_pile *new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (new != NULL)
	{
		new->data = data;
		if (*pile == NULL)
			new->prev = NULL;
		else
			new->prev = *pile;
		*pile = new;
	}
}

void	pile_swap(t_pile **pile)
{
	t_pile	*tmp;

	if (pile != NULL)
	{
		if (pile_len(*pile) > 1)
		{
			tmp = *pile;
			*pile = (*pile)->prev;
			tmp->prev = (*pile)->prev;
			(*pile)->prev = tmp;
		}
	}
}

void	pile_switch(t_pile **a, t_pile **b)
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

void	pile_rotate(t_pile **pile)
{
	t_pile	*tmp;

	if (pile != NULL)
	{
		if (pile_len(*pile) > 1)
		{
			tmp = *pile;
			while ((*pile)->prev != NULL)
				*pile = (*pile)->prev;
			(*pile)->prev = tmp;
			*pile = tmp->prev;
			tmp->prev = NULL;
		}
	}
}

void	pile_rev_rotate(t_pile **pile)
{
	t_pile *tmp;
	t_pile *tmp_prev;

	if (pile != NULL)
	{
		if (pile_len(*pile) > 1)
		{
			tmp = *pile;
			tmp_prev = *pile;
			while (tmp->prev != NULL)
			{
				tmp_prev = tmp;
				tmp = tmp->prev;
			}
			tmp->prev = *pile;
			*pile = tmp;
			tmp_prev->prev = NULL;
		}
	}
}
