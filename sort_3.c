/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:37:16 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/29 03:04:43 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_case(t_swap **stack)
{
	t_swap	*first_node;
	t_swap	*last_node;

	first_node = *stack;
	last_node = lstlast(*stack);
	if (last_node->data < first_node->next->data)
	{
		ra(stack, 0);
		sa(stack);
	}
	else
		ra(stack, 0);
}

void	sort_3(t_swap **stack)
{
	t_swap	*first_node;
	t_swap	*last_node;

	first_node = *stack;
	last_node = lstlast(*stack);
	if ((last_node->data < first_node->next->data)
		&& (first_node->data < first_node->next->data))
	{
		if (last_node->data > first_node->data)
		{
			rra(stack, 0);
			sa(stack);
		}
		else
			rra(stack, 0);
	}
	else if ((last_node->data < first_node->data)
		&& (first_node->data > first_node->next->data))
		sort_3_case(stack);
	else if (first_node->data > first_node->next->data)
		sa(stack);
}
