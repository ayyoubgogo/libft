/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:52:09 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/27 14:02:47 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_the_sub_seq_index(int *lenght, int max_length, int l)
{
	int	i;
	int	j;

	j = 0;
	i = l - 1;
	while (i >= 0)
	{
		if (lenght[i] == max_length)
		{
			j = i;
			break ;
		}
		i--;
	}
	return (j);
}

int	*lis1(int *array, int *lis, int *res, int max_length)
{
	int	i;

	i = 0;
	while (i < max_length)
	{
		lis[i] = array[res[i]];
		i++;
	}
	return (lis);
}

int	*get_res(int *sub_seq, int *res, int max_length, int j)
{
	while (max_length > 0)
	{
		res[max_length - 1] = j;
		j = sub_seq[j];
		max_length--;
	}
	return (res);
}

void	free_arrays(int *res, int *sub_seq, int *lenght, int *array)
{
	free(res);
	free(sub_seq);
	free(lenght);
	free(array);
}

int	*long_inc_subs(t_swap **stack, int *array, int *sub_seq, int *max_length)
{
	int	*res;
	int	*lis;
	int	l;
	int	j;
	int	*lenght;

	j = 0;
	l = lstsize(*stack);
	lenght = NULL;
	res = (int *)malloc(sizeof(int) * l);
	allocation(&array, &lenght, &sub_seq, l);
	while (j < l)
		lenght[j++] = 1;
	array = fill_array(array, stack);
	most_lkhadma(lenght, array, sub_seq, l);
	sub_seq[0] = 0;
	*max_length = big_number(lenght, l);
	j = get_the_sub_seq_index(lenght, *max_length, l);
	res = get_res(sub_seq, res, *max_length, j);
	*max_length = big_number(lenght, l);
	lis = (int *)malloc(sizeof(int) * (*max_length));
	lis = lis1(array, lis, res, *max_length);
	free_arrays(res, sub_seq, lenght, array);
	return (lis);
}
