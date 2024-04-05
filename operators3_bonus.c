/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:48:36 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 22:50:07 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_bonus(t_swap **a, t_swap **b)
{
	t_swap	*p;

	if (*b != NULL)
	{
		p = (*b)->next;
		addfront(a, *b);
		*b = p;
	}
}

void	pb_bonus(t_swap **a, t_swap **b)
{
	t_swap	*p;

	if (*a != NULL)
	{
		p = (*a)->next;
		addfront(b, *a);
		*a = p;
	}
}

void	ra_bonus(t_swap **a)
{
	t_swap	*first_node;

	first_node = *a;
	*a = first_node->next;
	first_node->next = NULL;
	add_back(a, first_node);
}

void	rb_bonus(t_swap **b)
{
	t_swap	*first_node;

	first_node = *b;
	*b = first_node->next;
	first_node->next = NULL;
	add_back(b, first_node);
}

void	rr_bonus(t_swap **a, t_swap **b)
{
	ra(a, 1);
	rb(b, 1);
}
