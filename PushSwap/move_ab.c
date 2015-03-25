/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 14:57:11 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/25 14:57:19 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"


void	ss(t_pile **a, t_pile **b)
{
	swap(a);
	swap(b);
}

void	rr(t_pile **a, t_pile **b)
{
	rotate(a);
	rotate(b);
}

void	rrr(t_pile **a, t_pile **b)
{
	r_rotate(a);
	r_rotate(b);
}
