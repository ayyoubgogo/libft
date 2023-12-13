/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:20:29 by agaougao          #+#    #+#             */
/*   Updated: 2023/11/29 13:05:29 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)-> next = new;
	else
		*lst = new;
}
int main()
{
	t_list *node= ft_lstnew("hello");
	t_list *node1 = ft_lstnew("world");
	t_list *node2 = ft_lstnew("h");
	node -> next = node1;
	ft_lstadd_back(&node , node2);
	printf("%s", ft_lstlast(&node)->content);
}