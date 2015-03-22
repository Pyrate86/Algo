/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 05:11:10 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:46:47 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pile_pop(t_pile **pile)
{
	t_pile *tmp;

	if (pile != NULL)
	{
		tmp = (*pile)->prev;
		free(*pile);
		*pile = NULL;
		if (tmp != NULL)
			*pile = tmp;
		else
			*pile = NULL;
	}
}

void	create_new_pile(t_pile **pile, char **av, int ac, t_env *env)
{
	int i;

	i = 0;
	if (env->debug != OFF)
		i = 1;
	while (ac != i)
	{
		pile_push(pile, ft_atoi(av[ac]));
		ac--;
	}
}
