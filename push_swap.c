/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:52:52 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 23:28:32 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_swap	*a;
	t_swap	*b;
	int		len;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		if (check_spaces(av) == 0)
			return (write(2, "Error\n", 6), 0);
		fill_stack(ac, av, &a);
		if (check_duplicate(&a) == 0)
			return (write(2, "Error\n", 6), 0);
		len = lstsize(a);
		if (sorted(&a) == 1)
		{
			if (len < 3)
				sa(&a);
			else if (len == 3)
				sort_3(&a);
			else
				push_number(&a, &b);
		}
	}
	print_stack(a);
	ft_lstclear(&a, &del);
	return (0);
}
