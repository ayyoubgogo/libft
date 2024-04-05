/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:21:37 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 17:06:23 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_swap **a, t_swap **b)
{
	rra(a, 1);
	rrb(b, 1);
	write(1, "rrr\n", 4);
}

int	big_number(void *node, int t_len)
{
	int	number;
	int	i;
	int	*track;

	i = 0;
	track = (int *)node;
	number = INT_MIN;
	while (i < t_len)
	{
		if (track[i] > number)
		{
			number = track[i];
		}
		i++;
	}
	return (number);
}

int	ft_abs(int a)
{
	if (a <= 0)
		return (-a);
	return (a);
}

int	max(int i, int j)
{
	if (i > j)
		return (i);
	else
		return (j);
}
