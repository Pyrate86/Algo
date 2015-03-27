/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 22:15:14 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 22:15:18 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <libft.h>
# include <limits.h>

typedef struct		s_pile
{
	int				data;
	struct s_pile	*prev;
}					t_pile;

typedef struct			s_moves
{
	char				c;
	char				*move;
	void				(*ptr_fnc)(t_pile **, t_pile **);
	struct s_moves		*next;
}						t_mv;

void				init(t_mv **mv);

int					check_args(int ac, char **av);

void				create_pile(t_pile **pile, char **av, int ac);
void				pile_push(t_pile **pile, int data);
void				cpy_pile(t_pile *a, t_pile **cpy);
int					get_plen(t_pile *p);
int					get_last_data(t_pile *p);

char				*find_sort(t_pile *a, t_pile *b, t_mv *mv);
void				sort(t_pile **a, t_pile **b, char *seq, t_mv *mv);

void				error(void);
void				print_moves(char *s, t_mv *mv);
void				output(t_pile *a, t_pile *b);

void				swap(t_pile **p);
void				push(t_pile **a, t_pile **b);
void				rotate(t_pile **p);
void				r_rotate(t_pile **p);

void				sa(t_pile **a, t_pile **b);
void				pa(t_pile **a, t_pile **b);
void				ra(t_pile **a, t_pile **b);
void				rra(t_pile **a, t_pile **b);

void				sb(t_pile **a, t_pile **b);
void				pb(t_pile **a, t_pile **b);
void				rb(t_pile **a, t_pile **b);
void				rrb(t_pile **a, t_pile **b);

void				ss(t_pile **a, t_pile **b);
void				rr(t_pile **a, t_pile **b);
void				rrr(t_pile **a, t_pile **b);

#endif
