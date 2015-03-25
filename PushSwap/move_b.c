/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 14:56:52 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 14:57:01 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	sb(t_pile **a, t_pile **b)
{
	(void)a;
	swap(b);
}

void	pb(t_pile **a, t_pile **b)
{
	push(a, b);
}

void	rb(t_pile **a, t_pile **b)
{
	(void)a;
	rotate(b);
}

void	rrb(t_pile **a, t_pile **b)
{
	(void)a;
	r_rotate(b);
}
