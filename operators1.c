/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:24:06 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 16:56:32 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_swap **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	ft_swap(&(*a)->data, &(*a)->next->data);
	write(1, "sa\n", 3);
}

void	sb(t_swap **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	ft_swap(&(*b)->data, &(*b)->next->data);
	write(1, "sb\n", 3);
}

void	ss(t_swap **a, t_swap **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	rra(t_swap **a, int flag)
{
	t_swap	*ptr;
	t_swap	*last_node;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	ptr = *a;
	while (ptr->next->next != NULL)
	{
		ptr = ptr->next;
	}
	last_node = ptr->next;
	ptr->next = NULL;
	addfront(a, last_node);
	if (flag == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_swap **b, int flag)
{
	t_swap	*last_node;
	t_swap	*ptr;

	ptr = *b;
	if (*b == NULL || (*b)->next == NULL)
		return ;
	while (ptr->next->next != NULL)
	{
		ptr = ptr->next;
	}
	last_node = ptr->next;
	ptr->next = NULL;
	addfront(b, last_node);
	if (flag == 0)
		write(1, "rrb\n", 4);
}
