/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 23:37:13 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 23:37:21 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	is_sorted(t_pile *a, t_pile *b)
{
	if (a == NULL || b != NULL)
		return 0;
	while (a->prev)
	{
		if (a->data > a->prev->data)
			return 0;
		a = a->prev;
	}
	return 1;
}

char		*find_sort(t_pile *a, t_pile *b, t_mv *mv)
{
	//Algo de tri
	char	*seq;

(void)a;
(void)b;
(void)mv;

	seq = "afffabbb";
	return (seq);
}

void		sort_from_str(t_pile **a, t_pile **b, char *str, t_mv *mv)
{
	int		i;
	t_mv	*tmp;

	i = 0;
	while (str[i])
	{
		tmp = mv;
		while (tmp)
		{
			if (str[i] == tmp->c)
				tmp->ptr_fnc(a, b);
			tmp = tmp->next;
		}
		i++;
	}
}

void		sort(t_pile **a, t_pile **b, char *seq, t_mv *mv)
{
	sort_from_str(a, b, seq, mv);

}
