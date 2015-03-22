/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pile_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 02:57:00 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:46:11 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	op_sb(t_pile **a, t_pile **b, char debug)
{
	pile_swap(b);
	if (debug != OFF)
	{
		print_operation("sb", BOLDGREEN, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_pb(t_pile **a, t_pile **b, char debug)
{
	pile_switch(a, b);
	if (debug != OFF)
	{
		print_operation("pb", BOLDGREEN, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_rb(t_pile **a, t_pile **b, char debug)
{
	pile_rotate(b);
	if (debug != OFF)
	{
		print_operation("rb", BOLDGREEN, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_rrb(t_pile **a, t_pile **b, char debug)
{
	pile_rev_rotate(b);
	if (debug != OFF)
	{
		print_operation("rrb", BOLDGREEN, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}
