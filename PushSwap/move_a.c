/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 14:56:37 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 14:56:48 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	sa(t_pile **a, t_pile **b)
{
	(void)b;
	swap(a);
}

void	pa(t_pile **a, t_pile **b)
{
	push(b, a);
}

void	ra(t_pile **a, t_pile **b)
{
	(void)b;
	rotate(a);
}

void	rra(t_pile **a, t_pile **b)
{
	(void)b;
	r_rotate(a);
}
