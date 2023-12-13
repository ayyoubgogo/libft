/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:36:19 by agaougao          #+#    #+#             */
/*   Updated: 2023/11/29 18:06:14 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}
#include<stdio.h>
int main()
{
	int array[4]; /* 1 int ! 7it 4 bytes [4] */
	memset(&array[0], 57, 4);
	memset(&array[1], 5, 4);
	memset(&array[2], 0, 1);
	memset(&array[3], 0, 1);
	int c = 0;
	memcpy((void *)&c, (void *)array, 4);
	printf("%d", c);
}