/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:52:12 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 16:58:43 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addfront(t_swap **lst, t_swap *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
