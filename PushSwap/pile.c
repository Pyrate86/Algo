/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 23:33:22 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 23:33:33 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int		get_plen(t_pile *p)
{
	int	l;
	
	l = 0;
	while (p)
	{
		l++;
		p = p->prev;
	}
	return (l);
}

int		get_last_data(t_pile *p)
{
	while (p->prev)
		p = p->prev;
	return (p->data);
}

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

void	pile_pop(t_pile **pile, int data)
{
	t_pile *new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if ((*pile)->prev)
	*pile = (*pile)->prev;
	new->data = data;
	new->prev = NULL;
	(*pile)->prev = new;
}

void	create_pile(t_pile **pile, char **av, int ac)
{
	while (ac != 0)
	{
		pile_push(pile, ft_atoi(av[ac]));
		ac--;
	}
}

void	cpy_pile(t_pile *a, t_pile **cpy)
{
	t_pile *tmp;
	
	if (*cpy == NULL && a != NULL)
	{
		pile_push(cpy, a->data);
		a = a->prev;
	}
	tmp = *cpy;
	while (a)
	{
		pile_pop(cpy, a->data);
		a = a->prev;
	}
	*cpy = tmp;
}
