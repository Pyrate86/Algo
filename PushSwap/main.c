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

int			main(int ac, char **av)
{
	t_pile	*a;
	t_pile	*b;
	char	*seq;
	t_mv	*mv;

	if (!check_args(ac, av))
		error();
	else
	{
		a = NULL;
		b = NULL;
		mv = NULL;
		init(&mv);
		create_pile(&a, av, ac - 1);
		seq = find_sort(a, b, mv);
		sort(&a, &b, seq, mv);
		output(a, b);
	}
	return (0);
}
