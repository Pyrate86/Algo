/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pile_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:24:21 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:24:23 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	op_ss(t_pile **a, t_pile **b, char debug)
{
	op_sa(a, b, OFF);
	op_sb(a, b, OFF);
	if (debug != OFF)
	{
		print_operation("ss", BOLDYELLOW, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_rr(t_pile **a, t_pile **b, char debug)
{
	op_ra(a, b, OFF);
	op_rb(a, b, OFF);
	if (debug != OFF)
	{
		print_operation("rr", BOLDYELLOW, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_rrr(t_pile **a, t_pile **b, char debug)
{
	op_rra(a, b, OFF);
	op_rrb(a, b, OFF);
	if (debug != OFF)
	{
		print_operation("rrr", BOLDYELLOW, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}
