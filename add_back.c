/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:20:29 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/26 17:09:13 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_swap **lst, t_swap *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		lstlast(*lst)-> next = new;
	else
		*lst = new;
}
