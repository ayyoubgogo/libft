/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:02:31 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/03 15:50:27 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_swap *head)
{
	printf("stack element :");
	while (head != NULL)
	{
		printf("%lld ", head->data);
		head = head->next;
	}
}

int	f_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	checknumber(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '-' || str[i] == '+' || f_isdigit(str[i])))
		return (0);
	if ((str[i] == '-' || str[i] == '+') && !f_isdigit(str[++i]))
		return (0);
	while (str[i])
	{
		if (!f_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		free(str[i]);
		i++;
	}
}

void	fill_stack(int ac, char **av, t_swap **head)
{
	char	**str;
	int		j;
	int		i;

	i = 1;
	while (i < ac)
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j] != 0)
		{
			if (checknumber(str[j]) == 0)
				error_gen();
			add_back(head, lst_new(ft_atoi(str[j])));
			j++;
		}
		i++;
		free_all(str);
		free(str);
	}
}
