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

static int	is_sorted_single(t_pile *p)
{
	if (p == NULL)
		return 0;
	if (p->prev == NULL)
		return 1;
	while (p->prev)
	{
		if (p->data > p->prev->data)
			return 0;
		p = p->prev;
	}
	return 1;
}

char	*split(t_pile **a, t_pile **b, int len)
{
	int		i;
	char	*str;
	
	i = 0;
	str = "";
	while (i < len / 2)
	{
		pb(a, b);
		str = ft_strjoin(str, "f");
		i++;
	}
	return (str);
}

char		*sort_2_piles(t_pile **a, t_pile **b, char *seq)
{
	char *str;
	
	str = seq;
	while (!((is_sorted_single(*a)) && (is_sorted_single(*b))))
	{
		ft_putendl("\n\t#### New loop ####");
		if ((*a)->prev && (*a)->prev->data < (*a)->data)
		{
			if ((*b)->prev && (*b)->prev->data < (*b)->data)
			{
				ss(a, b);
				str = ft_strjoin(str, "i");
			}
			else
			{
				sa(a, b);
				str = ft_strjoin(str, "a");
			}
		}
		else if ((*b)->prev && (*b)->prev->data < (*b)->data)
		{
			sb(a, b);
			str = ft_strjoin(str, "e");
		}
		
		//Rotation
		
		if (is_sorted_single(*a) && !(is_sorted_single(*b)))
		{
			if (get_last_data(*b) > (*b)->data)
			{
				rb(a, b);
				str = ft_strjoin(str, "g");
			}
			else
			{
				rrb(a, b);
				str = ft_strjoin(str, "h");
			}
		}
		else if (is_sorted_single(*b) && !(is_sorted_single(*a)))
		{
			if (get_last_data(*a) > (*a)->data)
			{
				ra(a, b);
				str = ft_strjoin(str, "c");
			}
			else
			{
				rra(a, b);
				str = ft_strjoin(str, "d");
			}

		}
		else if (!(is_sorted_single(*a)) && !(is_sorted_single(*b)))
		{
			if ((get_last_data(*a) > (*a)->data) && (get_last_data(*b) > (*b)->data))
			{
				rr(a, b);
				str = ft_strjoin(str, "j");
			}
			else
			{
				rrr(a, b);
				str = ft_strjoin(str, "k");
			}
		}
		else
		{
			ft_putcolor("A is sorted", 32);
			ft_putstr(" and ");
			ft_putcolorendl("B is sorted", 32);
		}
		if (is_sorted_single(*a))
			ft_putcolorendl("A is sorted", 32);
		if (is_sorted_single(*b))
			ft_putcolorendl("B is sorted", 32);
	}
	ft_putstr("Seqence en sortie : ");
	ft_putcolorendl(str, 93);
	return (str);
}

char		*push_back(char *str, int l)
{
	int i;
	
	i = 0;
	while (i < l / 2)
	{
		str = ft_strjoin(str, "b");
		i++;
	}
	return (str);
}

char		*find_sort(t_pile *a, t_pile *b, t_mv *mv)
{
	//Algo de tri
	char	*seq;
	int		len;
	t_pile	*atmp;
	t_pile	*btmp;
	
	if (is_sorted(a, b))
	{
		ft_putcolorendl("Sort", 32);
		return ("");
	}
	atmp = NULL;
	btmp = NULL;
	cpy_pile(a, &atmp);
	cpy_pile(b, &btmp);
ft_putcolorendl("Cpy", 92);
output(atmp, btmp);
ft_putendl("");
	len = get_plen(a);

ft_putstr("Taille de la pile A : \e[36m");
ft_putnbr(len);
ft_putendl("\e[0m");

	seq = split(&atmp, &btmp, len);

ft_putcolorendl("Split", 96);
output(atmp, btmp);
ft_putendl("");

	seq = sort_2_piles(&atmp, &btmp, seq);
	
	//seq = push_back(seq, len);
	
ft_putstr("Sequence de coups : ");
print_moves(seq, mv);

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
	if (is_sorted(*a, *b))
		ft_putcolorendl("Sort", 32);
	else
		ft_putcolorendl("Unsort", 31);
}
