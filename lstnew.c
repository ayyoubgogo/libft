/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:43:47 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/30 01:29:42 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*lst_new(long long data)
{
	t_swap	*node;

	node = (t_swap *)malloc(sizeof(t_swap));
	if (!node)
		return (NULL);
	node -> data = data;
	node -> next = NULL;
	return (node);
}
