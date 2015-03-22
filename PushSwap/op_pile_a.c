/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pile_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 02:57:00 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:46:01 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	op_sa(t_pile **a, t_pile **b, char debug)
{
	pile_swap(a);
	if (debug != OFF)
	{
		print_operation("sa", BOLDRED, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_pa(t_pile **a, t_pile **b, char debug)
{
	pile_switch(b, a);
	if (debug != OFF)
	{
		print_operation("pa", BOLDRED, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_ra(t_pile **a, t_pile **b, char debug)
{
	pile_rotate(a);
	if (debug != OFF)
	{
		print_operation("ra", BOLDRED, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}

void	op_rra(t_pile **a, t_pile **b, char debug)
{
	pile_rev_rotate(a);
	if (debug != OFF)
	{
		print_operation("rra", BOLDRED, debug);
		if (debug == ON)
			print_all_pile(*a, *b);
	}
}
