/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:58:25 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/27 01:28:56 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(void *ptr)
{
	*(int *)ptr = 0;
	return ;
}

void	ft_lstdelone(t_swap *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(&(lst->data));
	free(lst);
}

void	ft_lstclear(t_swap **lst, void (*del)(void *))
{
	t_swap	*tmp;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
