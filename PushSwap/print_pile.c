/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:26:13 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:26:15 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_pile(t_pile *pile, char pname)
{
	ft_putchar(pname);
	ft_putstr(": ");
	while (pile != NULL)
	{
		ft_putnbr(pile->data);
		ft_putchar(' ');
		pile = pile->prev;
	}
	ft_putchar('\n');
}

void	print_all_pile(t_pile *a, t_pile *b)
{
	print_pile(a, 'a');
	print_pile(b, 'b');
}
