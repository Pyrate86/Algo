/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 09:37:28 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:42:04 by sduprey          ###   ########.fr       */
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
