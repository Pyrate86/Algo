/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 14:29:39 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 14:29:49 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	error(void)
{
	ft_putendl_fd("Error", 2);
}

void		print_moves(char *s, t_mv *mv)
{
	int 	i;
	t_mv	*tmp;
	
	i = 0;
	while (s[i])
	{
		tmp = mv;
		while (tmp)
		{
			if (tmp->c == s[i])
			{
				ft_putstr(tmp->move);
				if (s[i + 1])
					ft_putchar(' ');
			}
			tmp = tmp->next;
		}
		i++;
	}
	ft_putendl("");
}

static void	print_pile(t_pile *pile, char name)
{
	ft_putchar(name);
	ft_putstr(": ");
	while (pile != NULL)
	{
		ft_putnbr(pile->data);
		ft_putchar(' ');
		pile = pile->prev;
	}
	ft_putchar('\n');
}

void	output(t_pile *a, t_pile *b)
{
	print_pile(a, 'a');
	print_pile(b, 'b');
}
