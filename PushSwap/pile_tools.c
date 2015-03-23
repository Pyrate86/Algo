/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:25:45 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:25:47 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		pile_len(t_pile *pile)
{
	int	i;

	i = 0;
	while (pile != NULL)
	{
		pile = pile->prev;
		i++;
	}
	return (i);
}

void	free_pile(t_pile **pile)
{
	while (*pile != NULL)
	{
		free(*pile);
		*pile = (*pile)->prev;
	}
}

void	pile_copy(t_pile **cpy, t_pile *a)
{
	int	len;

	len = pile_len(a);
	while (len)
	{
		pile_rev_rotate(&a);
		pile_push(cpy, a->data);
		len--;
	}
}
