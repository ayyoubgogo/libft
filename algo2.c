/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:58:27 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 23:59:41 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void get_the_lis_in_a(t_swap **a, t_swap **b, int *array, int *len)
{
	fill_array_w_lis(&array, a, len);
	int i = 0;
	while( i < *len)
	{
		printf("%d " , array[i]);
		i++;
	}
	push_to_b(a, b, len, array);
	print_stack(*b);
	free(array);
}

void compaire_moves(int p_a, int p_b, int *move)
{
	if (positive(p_a, p_b) != 0)
		if_positive(p_a, p_b, move);
	else if (negative(p_a, p_b))
		if_negative(p_a, p_b, move);
	else
		mixte(p_a, p_b, move);
}

int *get_the_move(t_swap **a, t_swap **b)
{
	int i;
	int size_b;
	int tmp[2];
	int *move;
	t_swap *current;

	size_b = lstsize(*b);
	move = (int *)malloc(2 * sizeof(int));
	current = (*b);
	tmp[0] = find_correct_position_a(a, current->data);
	tmp[1] = 0;
	move[0] = tmp[0];
	move[1] = tmp[1];
	i = 0;
	while (current->next != NULL)
	{
		current = current->next;
		tmp[0] = find_correct_position_a(a, current->data);
		tmp[1] = ++i;
		if (i > size_b / 2)
			tmp[1] = -(size_b - tmp[1]);
		compaire_moves(tmp[0], tmp[1], move);
	}
	return (move);
}

void move_smallest_to_top(t_swap **a)
{
	int min;
	int pos;
	t_swap *current;
	int index;
	int size;

	min = INT_MAX;
	pos = 0;
	current = *a;
	index = 0;
	size = lstsize(*a);
	while (current != NULL)
	{
		if (current->data < min)
		{
			min = current->data;
			pos = index;
		}
		current = current->next;
		index++;
	}
	if(pos <= size / 2)
	{
		while (pos-- > 0)
		ra(a, 0);
	}
	else
		while(pos++ < size)
			rra(a,0);
}

void push_number(t_swap **a, t_swap **b)
{
	int *array;
	int len;
	int *move;

	array = NULL;
	len = 0;
	get_the_lis_in_a(a, b, array, &len);
	print_stack(*a);
	while (*b != NULL)
	{
		move = get_the_move(a, b);
		if (move[0] <= 0 && move[1] <= 0)
			case1(a, b, move);
		else if (move[0] >= 0 && move[1] >= 0)
			case2(a, b, move);
		else if ((move[0] <= 0 && move[1] >= 0) || (move[0] >= 0 && move[1] <= 0))
			case3(a, b, move);
		pa(a, b);
		free(move);
	}
	move_smallest_to_top(a);
}
