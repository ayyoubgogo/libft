/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:50:22 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 16:54:41 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_swap **a, t_swap **b)
{
	t_swap	*p;

	if (*b != NULL)
	{
		p = (*b)->next;
		addfront(a, *b);
		*b = p;
		write(1, "pa\n", 3);
	}
}

void	pb(t_swap **a, t_swap **b)
{
	t_swap	*p;

	if (*a != NULL)
	{
		p = (*a)->next;
		addfront(b, *a);
		*a = p;
	}
	write(1, "pb\n", 3);
}

void	ra(t_swap **a, int flag)
{
	t_swap	*first_node;

	first_node = *a;
	*a = first_node->next;
	first_node->next = NULL;
	add_back(a, first_node);
	if (flag == 0)
		write(1, "ra\n", 3);
}

void	rb(t_swap **b, int flag)
{
	t_swap	*first_node;

	first_node = *b;
	*b = first_node->next;
	first_node->next = NULL;
	add_back(b, first_node);
	if (flag == 0)
		write(1, "rb\n", 3);
}

void	rr(t_swap **a, t_swap **b)
{
	ra(a, 1);
	rb(b, 1);
	write(1, "rr\n", 3);
}
