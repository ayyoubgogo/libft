/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators5_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:54:10 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/27 00:13:22 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa_bonus(t_swap **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	ft_swap(&(*a)->data, &(*a)->next->data);
}

void	sb_bonus(t_swap **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	ft_swap(&(*b)->data, &(*b)->next->data);
}

void	ss_bonus(t_swap **a, t_swap **b)
{
	sa_bonus(a);
	sb_bonus(b);
}

void	rra_bonus(t_swap **a)
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
}

void	rrb_bonus(t_swap **b)
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
}
