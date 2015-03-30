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

static int	is_sorted(t_pile *a, t_pile *b)
{
	if (a == NULL || b != NULL)
		return 0;
	return (is_sorted_single(a));
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

int			get_max(t_pile *p)
{
	int max;
	
	max = p->data;
	while(p)
	{
		if (p->data > max)
			max = p->data;
		p = p->prev;
	}
	return (max);
}

char		*sort_2_piles(t_pile **a, t_pile **b, char *seq)
{
	char	*str;
	int		max_a;
	int		max_b;
	
	str = seq;
	max_a = get_max(*a);
	max_b = get_max(*b);
	while (!((is_sorted_single(*a)) && (is_sorted_single(*b))))
	{
		if ((*a)->prev && (*a)->prev->data < (*a)->data)
		{
			if (((*b)->prev && (*b)->prev->data < (*b)->data) && ((*b)->data != max_b))
			{
					ss(a, b);
					str = ft_strjoin(str, "i");
			}
			else
			{
				if ((*a)->data != max_a)
				{
					sa(a, b);
					str = ft_strjoin(str, "a");
				}
			}
		}
		else if (((*b)->prev && (*b)->prev->data < (*b)->data) && ((*b)->data != max_b))
		{
			sb(a, b);
			str = ft_strjoin(str, "e");
		}
		if (is_sorted_single(*a) && !(is_sorted_single(*b)))
		{
			rb(a,b);
			str = ft_strjoin(str, "g");
		}
		else if (is_sorted_single(*b) && !(is_sorted_single(*a)))
		{
			ra(a,b);
			str = ft_strjoin(str, "c");
		}
		else if (!(is_sorted_single(*a)) && !(is_sorted_single(*b)))
		{
			rr(a,b);
			str = ft_strjoin(str, "j");
		}
	}
	return (str);
}

char		*insert(t_pile **a, t_pile **b, char *seq, int max)
{
	char		*ret;

	ret = seq;
	if (get_last_data(*a) < max)
	{
		rrb(a,b);
		ret = ft_strjoin(ret, "h");
		pa(a,b);
		ret = ft_strjoin(ret, "b");
		ra(a,b);
		ret = ft_strjoin(ret, "c");
	}			
	while (!is_sorted(*a, *b))
	{
		if((*b) &&((*b)->data < (*a)->data))
		{
			pa(a,b);
			ret = ft_strjoin(ret, "b");
			ra(a,b);
			ret = ft_strjoin(ret, "c");
		}
		else
		{
			ra(a,b);
			ret = ft_strjoin(ret, "c");
		}			
	}
	return (ret);
}

char		*find_sort(t_pile *a, t_pile *b)
{
	//Algo de tri
	char	*seq;
	int		len;
	t_pile	*atmp;
	t_pile	*btmp;

	if (is_sorted(a, b))
		return ("");
	atmp = NULL;
	btmp = NULL;
	cpy_pile(a, &atmp);
	cpy_pile(b, &btmp);
	len = get_plen(a);
	seq = split(&atmp, &btmp, len);
	seq = sort_2_piles(&atmp, &btmp, seq);
	seq = insert(&atmp, &btmp, seq, get_max(a));
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
