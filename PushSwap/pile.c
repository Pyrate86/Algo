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

void	create_pile(t_pile **pile, char **av, int ac)
{
	while (ac != 0)
	{
		pile_push(pile, ft_atoi(av[ac]));
		ac--;
	}
}