/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 22:14:15 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 22:14:29 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void	error(void)
{
	ft_putendl("Error");
}

static void	print_pile(t_pile *pile, char pname)
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
static void	output(t_pile *a, t_pile *b)
{
	print_pile(a, 'a');
	print_pile(b, 'b');
}

int			main(int ac, char **av)
{
	t_pile	*a;
	t_pile	*b;

	if (!check_args(ac, av))
		error();
	else
	{
		a = NULL;
		b = NULL;
		create_pile(&a, av, ac - 1);
		sort(&a, &b);
		output(a, b);
		// ft_putcolorendl("Good", 32);
	}
	return (0);
}
