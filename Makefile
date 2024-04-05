# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 09:23:44 by agaougao          #+#    #+#              #
#    Updated: 2024/04/04 14:29:49 by agaougao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= push_swap
NAME_BONUS = checker
CC 		= gcc -fsanitize=address -g3
CFLAGS 	= -Wall -Wextra -Werror 


SRCS	=	actions.c 	 operators2.c operators1.c  ft_atoi.c fill_stack.c ft_split.c add_back.c lst_last.c lstnew.c ft_strlen.c \
			ft_substr.c	lstadd_front.c operators0.c sort_3.c lstsize.c algo.c algo1.c algo2.c  help0.c help1.c check_errors.c ft_lstclear.c checker_heL_fun.c takmila.c
B_OBJS	= operators3_bonus.c operators4_bonus.c operators5_bonus.c fill_stack.c  ft_split.c add_back.c lst_last.c lstnew.c actions.c\
		get_next_line/get_next_line.c ft_substr.c	lstadd_front.c algo1.c ft_atoi.c algo.c help0.c check_errors.c lstsize.c  takmila.c\
		get_next_line/get_next_line_utils.c  operators0.c operators1.c operators2.c checker_heL_fun.c  ft_lstclear.c\

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS	= $(B_OBJS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar -crs $(NAME) $@

bonus : $(NAME_BONUS)

$(NAME_BONUS):$(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS)-c $< -o $@
	ar -crs $(NAME_BONUS) $@

	
	
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	
re: fclean all
