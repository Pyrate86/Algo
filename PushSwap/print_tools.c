/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:26:20 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:26:26 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_operation(char *op, char *color, char debug)
{
	ft_putstr(color);
	ft_putstr(op);
	ft_putstr(WHITE);
	if (debug == ON)
		ft_putendl(":");
	else if (debug == SEMI)
		ft_putchar(' ');
}

void	print_move(int move)
{
	ft_putstr(BOLDWHITE);
	ft_putstr("moves");
	ft_putstr(WHITE);
	ft_putstr(": ");
	ft_putnbr(move);
	ft_putchar('\n');
}
