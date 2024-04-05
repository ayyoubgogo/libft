/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:57:40 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/30 00:34:49 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(long long *s1, long long *s2)
{
	int	tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	if_positive(int p_a, int p_b, int *move)
{
	if (positive(move[0], move[1]) != 0)
	{
		if (max(move[1], move[0]) > max(p_a, p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else if (negative(move[0], move[1]) != 0)
	{
		if (max(-move[1], -move[0]) > max(p_a, p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else
	{
		if (ft_abs(move[1]) + ft_abs(move[0]) > max(p_a, p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
}

void	if_negative(int p_a, int p_b, int *move)
{
	if (positive(move[0], move[1]) != 0)
	{
		if (max(move[1], move[0]) > max(-p_a, -p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else if (negative(move[0], move[1]))
	{
		if (max(-move[1], -move[0]) > max(-p_a, -p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else
	{
		if (ft_abs(move[1]) + ft_abs(move[0]) > max(-p_a, -p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
}

void	mixte(int p_a, int p_b, int *move)
{
	if (positive(move[0], move[1]))
	{
		if (max(move[1], move[0]) > ft_abs(p_a) + ft_abs(p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else if (negative(move[0], move[1]))
	{
		if (max(-move[1], -move[0]) > ft_abs(p_a) + ft_abs(p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
	else
	{
		if (ft_abs(move[1]) + ft_abs(move[0]) > ft_abs(p_a) + ft_abs(p_b))
		{
			move[0] = p_a;
			move[1] = p_b;
		}
	}
}

int	sorted(t_swap **a)
{
	int		len;
	t_swap	*current;

	len = lstsize(*a);
	current = *a;
	if (len >= 1)
	{
		while (current->next)
		{
			if (current->data < current->next->data)
				current = current->next;
			else
				return (1);
		}
	}
	return (0);
}
