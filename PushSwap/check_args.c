/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 22:27:54 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 22:28:02 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[0] == '+'))
			i++;
		else if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_int(char *str)
{
	int		size;
	int		len;
	int		i;
	char	*min;
	char	*max;

	min = ft_itoa(INT_MIN);
	max = ft_itoa(INT_MAX);
	size = str[0] == '-' || str[0] == '+' ? ft_strlen(min) : ft_strlen(max);
	len = ft_strlen(str);
	if (len > size)
		return (0);
	i = 0;
	if (len == size)
	{
		while (str[i])
		{
			if (str[i + (str[0] == '+')] > ((str[0] == '-') ? min[i] : max[i]))
				return (0);
			i++;
		}
	}
	return (1);
}

static int	as_double(char *str, char **lst, int i)
{
	while (lst[i])
	{
		if (ft_strcmp(lst[i], str) == 0)
			return (1);
		i++;
	}
	return (0);
}

int			check_args(int ac, char **av)
{
	int i;

	if (ac < 2)
		return (0);
	i = 1;
	while (av[i])
	{
		if (!is_num(av[i]) || !is_int(av[i]))
			return (0);
		if (as_double(av[i], av, i + 1))
			return (0);
		i++;
	}
	return (1);
}
