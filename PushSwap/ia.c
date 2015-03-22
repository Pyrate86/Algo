#include "push_swap.h"

int		is_sorted(t_pile *a, t_pile *b)
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

int		find_min(t_pile *a)
{
	int min = a->data;

	while (a->prev)
	{
		min = min > a->data ? a->data : min;
		a = a->prev;
	}
		min = min > a->data ? a->data : min;
	return min;
}

int		max_depth(t_pile **a, t_pile **b)
{
	int	op;
	int	min;

	op = 0;
	while ((*a)->prev->prev)
	{
		min = find_min(*a);
		while ((*a)->data != min)
		{
			op_ra(a, b, OFF);
			op++;
		}
		op_pb(a, b, OFF);
		op++;
	}
	if ((*a)->data > (*a)->prev->data)
	{
		op_ra(a, b, OFF);
		op++;
	}
	while (*b)
	{
		op_pa(a, b, OFF);
		op++;
	}
	return op;
}

void		move_pile(t_pile **a, t_pile **b, char move)
{
	if (move == 'a')
		op_sa(a, b, OFF);
	else if (move == 'b')
		op_sb(a, b, OFF);
	else if (move == 'c')
		op_ss(a, b, OFF);
	else if (move == 'd')
		op_pa(a, b, OFF);
	else if (move == 'e')
		op_pb(a, b, OFF);
	else if (move == 'f')
		op_ra(a, b, OFF);
	else if (move == 'g')
		op_rb(a, b, OFF);
	else if (move == 'h')
		op_rr(a, b, OFF);
	else if (move == 'i')
		op_rra(a, b, OFF);
	else if (move == 'j')
		op_rrb(a, b, OFF);
	else if (move == 'k')
		op_rrr(a, b, OFF);
}

void	move_back(t_pile **a, t_pile **b, char move)
{
	if (move == 'a')
		move_pile(a, b, 'a');
	else if (move == 'b')
		move_pile(a, b, 'b');
	else if (move == 'c')
		move_pile(a, b, 'c');
	else if (move == 'd')
		move_pile(a, b, 'e');
	else if (move == 'e')
		move_pile(a, b, 'd');
	else if (move == 'f')
		move_pile(a, b, 'i');
	else if (move == 'g')
		move_pile(a, b, 'j');
	else if (move == 'h')
		move_pile(a, b, 'k');
	else if (move == 'i')
		move_pile(a, b, 'f');
	else if (move == 'j')
		move_pile(a, b, 'g');
	else if (move == 'k')
		move_pile(a, b, 'h');
}

char	reverse_move(char move)
{
	if (move == 'a')
		return('a');
	else if (move == 'b')
		return('b');
	else if (move == 'c')
		return('c');
	else if (move == 'd')
		return('e');
	else if (move == 'e')
		return('d');
	else if (move == 'f')
		return('i');
	else if (move == 'g')
		return('j');
	else if (move == 'h')
		return('k');
	else if (move == 'i')
		return('f');
	else if (move == 'j')
		return('g');
	else if (move == 'k')
		return('h');
	return (' ');
}

char	*putmove(char str)
{
	char *ret;

	ret = "";
	if (str == 'a')
		ret = ft_strjoin(ret, "sa");
	else if (str == 'b')
		ret = ft_strjoin(ret, "sb");
	else if (str == 'c')
		ret = ft_strjoin(ret, "ss");
	else if (str == 'd')
		ret = ft_strjoin(ret, "pa");
	else if (str == 'e')
		ret = ft_strjoin(ret, "pb");
	else if (str == 'f')
		ret = ft_strjoin(ret, "ra");
	else if (str == 'g')
		ret = ft_strjoin(ret, "rb");
	else if (str == 'h')
		ret = ft_strjoin(ret, "rr");
	else if (str == 'i')
		ret = ft_strjoin(ret, "rra");
	else if (str == 'j')
		ret = ft_strjoin(ret, "rrb");
	else if (str == 'k')
		ret = ft_strjoin(ret, "rrr");

	return (ret);
}

char	*print_moves(char *str)
{
	int i;
	char *ret;

	ret = "";
	i = 0;
	while (str[i])
	{
	if (str[i] == 'a')
		ret = ft_strjoin(ret, "sa");
	else if (str[i] == 'b')
		ret = ft_strjoin(ret, "sb");
	else if (str[i] == 'c')
		ret = ft_strjoin(ret, "ss");
	else if (str[i] == 'd')
		ret = ft_strjoin(ret, "pa");
	else if (str[i] == 'e')
		ret = ft_strjoin(ret, "pb");
	else if (str[i] == 'f')
		ret = ft_strjoin(ret, "ra");
	else if (str[i] == 'g')
		ret = ft_strjoin(ret, "rb");
	else if (str[i] == 'h')
		ret = ft_strjoin(ret, "rr");
	else if (str[i] == 'i')
		ret = ft_strjoin(ret, "rra");
	else if (str[i] == 'j')
		ret = ft_strjoin(ret, "rrb");
	else if (str[i] == 'k')
		ret = ft_strjoin(ret, "rrr");
	if (str[i + 1] != '\0')
		ret = ft_strjoin(ret, " ");
	i++;
	}
	return (ret);
}

void		tree(int *test, t_pile **a, t_pile **b, char **res, char **current, int depth, int *depth_max)
{
	int i;
	char	*moves;

	moves = "abcdefghijk";

	i = 0;
	while (i < 11)
	{
		while (
			(moves[i] == reverse_move((*current)[depth - 1])) 
			|| (*a == NULL && moves[i] == 'a')
			|| (*a != NULL && ((*a)->prev == NULL && moves[i] == 'a'))
			|| (*a == NULL && moves[i] == 'f')
			|| (*a != NULL && ((*a)->prev == NULL && moves[i] == 'f'))
			|| (*a == NULL && moves[i] == 'i')
			|| (*a != NULL && ((*a)->prev == NULL && moves[i] == 'i'))
			|| (*a == NULL && moves[i] == 'e')
			|| (*b == NULL && moves[i] == 'b')
			|| (*b != NULL && ((*b)->prev == NULL && moves[i] == 'b'))
			|| (*b == NULL && moves[i] == 'g')
			|| (*b != NULL && ((*b)->prev == NULL && moves[i] == 'g'))
			|| (*b == NULL && moves[i] == 'j')
			|| (*b != NULL && ((*b)->prev == NULL && moves[i] == 'j'))
			|| (*b == NULL && moves[i] == 'd')
			|| (moves[i] == 'c' && (*current)[depth - 1] == 'a' && *b == NULL)
			|| (moves[i] == 'c' && (*current)[depth - 1] == 'b' && *a == NULL)
			|| (moves[i] == 'h' && (*current)[depth - 1] == 'i' && *b == NULL)
			|| (moves[i] == 'h' && (*current)[depth - 1] == 'j' && *a == NULL)
			|| (moves[i] == 'k' && (*current)[depth - 1] == 'f' && *b == NULL)
			|| (moves[i] == 'k' && (*current)[depth - 1] == 'g' && *a == NULL)
			)
			{
					i++;
			}
		*test += 1;

// ft_putstr("############################## ");
// ft_putnbr(tests);
// ft_putstr(" ##############################\n");
// ft_putstr("### current move = ");
// ft_putstr(print_moves(*current));
// ft_putstr(" ###\n");
// ft_putstr("### depth = ");
// ft_putnbr(depth);
// ft_putstr(" ###\n");
// ft_putstr("### depth max= ");
// ft_putnbr(*depth_max);
// ft_putstr(" ###\n");
// ft_putstr("#### Move ############\t");
// ft_putstr(putmove(moves[i]));
// ft_putstr("\n#### Reverse move ####\t");
// ft_putstr(putmove(reverse_move(moves[i])));
// ft_putstr("\n#### Etat initial des piles ####\n");
// print_all_pile(*a, *b);

		move_pile(a, b, moves[i]);
		(*current)[depth] = moves[i];
		/*
		ft_putnbr(*test);
		ft_putstr(" : ");
		ft_putendl(*current);
*/
// ft_putstr("#### Etat des piles ####\n");
// print_all_pile(*a, *b);

		if (!is_sorted(*a, *b))
		{
			if (depth + 1 < *depth_max)
				tree(test, a, b, res, current, depth + 1, depth_max);
		}
		else
		{

// ft_putstr("//////////////////////////////////////////////////////////////\n");
			if (depth +1 < *depth_max)
			{

// ft_putstr("NEW RES !\n");

				*res = ft_strdup(*current);
				*depth_max = depth;
ft_putnbr(depth + 1);
ft_putendl(" moves");

// ft_putstr("############################## ");
// ft_putnbr(tests);
// ft_putstr(" ##############################\n");
// ft_putstr("SORTED => ");
// ft_putstr(print_moves(*res));
// ft_putstr(" (");
// ft_putnbr(depth + 1);
// ft_putendl(" moves)");
// ft_putstr("\n#### Etat des piles ####\n");
// print_all_pile(*a, *b);
// ft_putstr("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
			}

		}
		i++;
		move_back(a, b, (*current)[depth]);

// ft_putstr("#### Etat Precedent des piles ####\n");
// print_all_pile(*a, *b);
// ft_putstr("##############################################################\n\n");

		(*current)[depth] = '\0';

	}
}

int		ia(t_pile **a, t_pile **b)
{
	int i;
	int max;
	char	*res;
	char	*cur;
	t_pile *atmp;
	t_pile *btmp;


	atmp = NULL;
	btmp = NULL;

	pile_copy(&atmp, *a);
	pile_copy(&btmp, *b);

	if (is_sorted(*a, *b))
		return 0;
	max = max_depth(&atmp, &btmp);
	printf("MAX = %d\n", max);
	free_pile(&atmp);
	free_pile(&btmp);
	pile_copy(&atmp, *a);
	pile_copy(&btmp, *b);

	res = ft_strnew(max);
	cur = ft_strnew(max);
	int	tests = 0;
	tree(&tests, &atmp, &btmp, &res, &cur, 0, &max);

	printf("\033[92m\n#### RESULTAT ####\n");
	printf("# tests = %d\n# res = %s\n# max = %d\n", tests, print_moves(res), max + 1);
	printf("##################\033[0m\n");

	i = 0;
	while (res[i])
	{
		// ft_putendl(putmove(res[i]));
		move_pile(a, b, res[i]);
		// print_all_pile(*a, *b);
		i++;
	}
	return max + 1;
}