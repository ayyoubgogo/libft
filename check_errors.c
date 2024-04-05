/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:04:45 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 03:36:34 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_spaces(char **av)
{
	int	i;
	int	count;
	int	size;
	int	j;

	i = 1;
	while (av[i])
	{
		size = ft_strlen(av[i]);
		count = 0;
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ')
				count++;
			j++;
		}
		if (count == size)
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicate(t_swap **a)
{
	t_swap	*current;
	t_swap	*ptr_current;

	current = *a;
	while (current)
	{
		if (current->data > INT_MAX || current->data < INT_MIN)
			return (ft_lstclear(a, &del), 0);
		ptr_current = (*a);
		while (ptr_current)
		{
			if (ptr_current == current)
			{
				ptr_current = ptr_current->next;
				continue ;
			}
			if (current->data == ptr_current->data)
				return (ft_lstclear(a, &del), 0);
			ptr_current = ptr_current->next;
		}
		current = current->next;
	}
	return (1);
}
