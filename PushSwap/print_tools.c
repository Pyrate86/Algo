/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 03:34:57 by sduprey           #+#    #+#             */
/*   Updated: 2015/02/17 09:47:29 by sduprey          ###   ########.fr       */
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
