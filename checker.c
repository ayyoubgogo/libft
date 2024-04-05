/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:02:06 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 01:20:20 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_operators(t_swap **a, t_swap **b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa_bonus(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb_bonus(b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss_bonus(a, b);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa_bonus(a, b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb_bonus(a, b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra_bonus(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb_bonus(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr_bonus(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra_bonus(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb_bonus(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr_bonus(a, b);
	else
		error_gen();
	return (chek(a));
}

int	errors(t_swap **a)
{
	if (check_duplicate(a) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	read_the_line(t_swap **a, t_swap **b, char *line)
{
	int	n;

	line = get_next_line(0);
	n = -1;
	while (line)
	{
		n = check_operators(a, b, line);
		free(line);
		line = get_next_line(0);
	}
	return (n);
}

int	main(int ac, char **av)
{
	t_swap	*a;
	t_swap	*b;
	char	*str;
	int		n;

	a = NULL;
	b = NULL;
	str = NULL;
	n = 0;
	if (check_spaces(av) == 0)
		return (write(2, "Error\n", 6), 0);
	fill_stack(ac, av, &a);
	if (errors(&a) == 0)
		exit(0);
	n = read_the_line(&a, &b, str);
	if (sorted(&a) == 0 && !b)
	{
		write(1, "OK\n", 3);
		return (ft_lstclear(&a, &del), 0);
	}
	if (n == 0 && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (ft_lstclear(&a, &del), 0);
}
