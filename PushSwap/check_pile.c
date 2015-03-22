/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 01:30:47 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:49:12 by sduprey          ###   ########.fr       */
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
