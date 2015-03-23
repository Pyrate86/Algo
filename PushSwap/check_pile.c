/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:24:43 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:24:45 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		check_pile(t_pile *a)
{
	int err;

	err = 0;
	while (a->prev != NULL)
	{
		if (a->data > a->prev->data)
			err++;
		a = a->prev;
	}
	return (err);
}
