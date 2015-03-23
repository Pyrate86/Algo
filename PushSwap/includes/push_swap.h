/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:26:56 by ghilbert          #+#    #+#             */
/*   Updated: 2015/03/23 20:26:58 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

# include <stdio.h>

# define RED		"\033[00;31m"
# define WHITE		"\033[00m"

# define BOLDRED	"\033[1m\033[31m"
# define BOLDWHITE	"\033[1m\033[37m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDYELLOW	"\033[1m\033[33m"

# define ON		'o'
# define OFF	'f'
# define SEMI	's'

typedef struct		s_pile
{
	int				data;
	struct s_pile	*prev;
}					t_pile;

typedef struct		s_env
{
	char			debug;
}					t_env;

void				create_new_pile(t_pile **pile, char **av, int ac, t_env *e);
void				pile_push(t_pile **pile, int data);
void				pile_pop(t_pile **pile);
void				pile_swap(t_pile **pile);
void				pile_rotate(t_pile **pile);
void				pile_rev_rotate(t_pile **pile);
void				pile_switch(t_pile **a, t_pile **b);
void				print_pile(t_pile *pile, char pname);
void				pile_copy(t_pile **cpy, t_pile *a);
void				free_pile(t_pile **pile);

void				print_all_pile(t_pile *a, t_pile *b);
void				print_operation(char *op, char *color, char debug);
void				print_move(int move);

void				op_sa(t_pile **a, t_pile **b, char debug);
void				op_pa(t_pile **a, t_pile **b, char debug);
void				op_ra(t_pile **a, t_pile **b, char debug);
void				op_rra(t_pile **a, t_pile **b, char debug);

void				op_sb(t_pile **a, t_pile **b, char debug);
void				op_pb(t_pile **a, t_pile **b, char debug);
void				op_rb(t_pile **a, t_pile **b, char debug);
void				op_rrb(t_pile **a, t_pile **b, char debug);

void				op_ss(t_pile **a, t_pile **b, char debug);
void				op_rr(t_pile **a, t_pile **b, char debug);
void				op_rrr(t_pile **a, t_pile **b, char debug);

int					pile_len(t_pile *pile);
int					check_rotate(t_pile *a, int data);

int					check_pile(t_pile *a);
int					check_args(char **av, t_env *e);
int					check_duplicate(char **av, t_env *e);

int					print_error(void);

int					ia(t_pile **a, t_pile **b);

#endif
