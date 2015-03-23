/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:25:01 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:25:03 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		main(int ac, char **av)
{
	t_pile	*a;
	t_pile	*b;
	t_env	env;
	int		op;

	a = NULL;
	b = NULL;
	env.debug = OFF;
	if (ac > 1)
	{
		if (ac < 2)
			return (0);
		print_operation("init", BOLDWHITE, ON);
		create_new_pile(&a, av, ac - 1, &env);
		print_all_pile(a, b);
		op = ia(&a, &b);
		if (env.debug == SEMI)
			ft_putchar('\n');
		print_operation("end", BOLDWHITE, ON);
		print_all_pile(a, b);
		print_move(op);
	}
	return (0);
}
