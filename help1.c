/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:26:36 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 17:00:03 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case1(t_swap **a, t_swap **b, int *move)
{
	int	i;
	int	j;

	i = move[0];
	j = move[1];
	if (move[0] <= 0 && move[1] <= 0)
	{
		while (i && j)
		{
			rrr(a, b);
			i++;
			j++;
		}
		while (i)
		{
			rra(a, 0);
			i++;
		}
		while (j)
		{
			rrb(b, 0);
			j++;
		}
	}
}

void	case2(t_swap **a, t_swap **b, int *move)
{
	int	i;
	int	j;

	i = move[0];
	j = move[1];
	if (move[0] >= 0 && move[1] >= 0)
	{
		while (i && j)
		{
			rr(a, b);
			i--;
			j--;
		}
		while (i)
		{
			ra(a, 0);
			i--;
		}
		while (j)
		{
			rb(b, 0);
			j--;
		}
	}
}

void	case3_2(t_swap **a, t_swap **b, int *move)
{
	int	i;
	int	j;

	i = move[0];
	j = move[1];
	while (i > 0 && j < 0)
	{
		ra(a, 0);
		rrb(b, 0);
		i--;
		j++;
	}
	while (i > 0)
	{
		ra(a, 0);
		i--;
	}
	while (j < 0)
	{
		rrb(b, 0);
		j++;
	}
}

void	case3_1(t_swap **a, t_swap **b, int *move)
{
	int	i;
	int	j;

	i = move[0];
	j = move[1];
	while (i < 0 && j > 0)
	{
		rra(a, 0);
		rb(b, 0);
		i++;
		j--;
	}
	while (i < 0)
	{
		rra(a, 0);
		i++;
	}
	while (j > 0)
	{
		rb(b, 0);
		j--;
	}
}

void	case3(t_swap **a, t_swap **b, int *move)
{
	if ((move[0] <= 0 && move[1] >= 0))
	{
		case3_1(a, b, move);
	}
	else
		case3_2(a, b, move);
}
