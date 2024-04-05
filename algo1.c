/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:52:06 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 23:03:56 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	allocation(int **array, int **lenght, int **sub_seq, int l)
{
	*array = (int *)malloc(sizeof(int) * l);
	*lenght = (int *)malloc(sizeof(int) * l);
	*sub_seq = (int *)malloc(sizeof(int) * l);
}

void	most_lkhadma(int *lenght, int *array, int *sub_seq, int l)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < l)
	{
		j = 0;
		while (j < i)
		{
			if (array[j] < array[i] && lenght[i] <= lenght[j])
			{
				lenght[i] = max(lenght[i], lenght[j] + 1);
				sub_seq[i] = j;
			}
			j++;
		}
		i++;
	}
}

int	*fill_array(int *array, t_swap **stack)
{
	int		i;
	t_swap	*ras;

	ras = (*stack);
	i = 0;
	while ((*stack) != NULL)
	{
		array[i] = (*stack)->data;
		(*stack) = (*stack)->next;
		i++;
	}
	(*stack) = ras;
	return (array);
}

void	fill_array_w_lis(int **array, t_swap **a, int *len)
{
	int	*array1;
	int	*sub_seq;

	array1 = NULL;
	sub_seq = NULL;
	*array = long_inc_subs(a, array1, sub_seq, len);
	free(array1);
}

void	push_to_b(t_swap **a, t_swap **b, int *len, int *array)
{
	t_swap	*temp;
	t_swap	*current;
	t_swap	*ras;
	int		found;
	int		size;

	ras = *a;
	current = *a;
	while (current != NULL)
	{
		size = lstsize(*a);
		found = 0;
		found = takmila(current, len, array);
		if (found == 0)
		{
			temp = current->next;
			takmila1(size, a, ras, current);
			pb(a, b);
			ras = (*a);
			current = temp;
		}
		else
			current = current->next;
	}
}
