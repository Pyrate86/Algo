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

int					check_args(int ac, char **av);

void				create_pile(t_pile **pile, char **av, int ac);

void				sort(t_pile **a, t_pile **b);

#endif
