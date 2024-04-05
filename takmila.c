/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takmila.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 02:36:31 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 23:04:14 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	takmila(t_swap *current, int *len, int *array)
{
	int	found;
	int	i;

	found = 0;
	i = 0;
	while (i < *len)
	{
		if (array[i] == current->data)
		{
			found = 1;
			break ;
		}
		i++;
	}
	return (found);
}

void	takmila1(int size, t_swap **a, t_swap *ras, t_swap *current)
{
	int	j;

	j = 0;
	while (*a != current)
	{
		(*a) = (*a)->next;
		j++;
	}
	(*a) = ras;
	if (j > size / 2)
	{
		while (j < size)
		{
			rra(a, 0);
			j++;
		}
	}
	else
	{
		while (j)
		{
			ra(a, 0);
			j--;
		}
	}
}
