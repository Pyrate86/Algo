/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 01:19:08 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:49:33 by sduprey          ###   ########.fr       */
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
