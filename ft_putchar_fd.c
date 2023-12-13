/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:01:36 by agaougao          #+#    #+#             */
/*   Updated: 2023/11/27 09:09:44 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int	main()
// {
// 	int fd = open("sch.c", O_WRONLY | O_CREAT);
// 	printf("%d\n", fd);
// 	ft_putchar_fd('c', 5);
// 	write(1, "\n", 1);
// 	close(fd);
// }
