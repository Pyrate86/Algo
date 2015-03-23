/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:25:31 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:25:33 by ghilbert         ###   ########.fr       */
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
