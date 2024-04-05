/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:05:08 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 17:00:54 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	top_both_stack(t_swap **a)
{
	int		i;
	int		min;
	int		k;
	t_swap	*current;

	k = 0;
	min = INT_MIN;
	i = 0;
	current = *a;
	while (current)
	{
		if (min < current->data)
		{
			min = current->data;
			k = i;
			if (current->next == NULL)
				return (0);
		}
		current = current->next;
		i++;
	}
	return (k + 1);
}

int	find_correct_position_a(t_swap **a, int number)
{
	int		i;
	int		size;
	t_swap	*current;
	int		res;

	size = lstsize(*a);
	i = 0;
	current = *a;
	if (number < current->data && number > lstlast(current)->data)
		return (0);
	while (current->next)
	{
		if (number > current->data && number < current->next->data)
		{
			if (i <= size / 2)
				return (i + 1);
			else
				return ((-size) + i + 1);
		}
		i++;
		current = current->next;
	}
	res = top_both_stack(a);
	return (res);
}

int	positive(int a, int b)
{
	if (a >= 0 && b >= 0)
		return (1);
	return (0);
}

int	negative(int a, int b)
{
	if (a <= 0 && b <= 0)
		return (1);
	return (0);
}
