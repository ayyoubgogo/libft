/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:50:07 by agaougao          #+#    #+#             */
/*   Updated: 2024/04/04 02:38:09 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long long		data;
	struct s_list	*next;

}					t_swap;

// actions
void				sa(t_swap **a);
void				sb(t_swap **b);
void				ss(t_swap **a, t_swap **b);
void				ra(t_swap **a, int flag);
void				rb(t_swap **b, int flag);
void				rr(t_swap **a, t_swap **b);
void				rra(t_swap **a, int flag);
void				rrb(t_swap **b, int flag);
void				rrr(t_swap **a, t_swap **b);
void				pa(t_swap **a, t_swap **b);
void				pb(t_swap **a, t_swap **b);

void				ft_swap(long long *s1, long long *s2);
void				fill_stack(int ac, char **av, t_swap **head);
long long			ft_atoi(char *str);
char				**ft_split(char *s, char c);
void				add_back(t_swap **lst, t_swap *new);
t_swap				*lst_new(long long data);
char				*ft_substr(char const *s, unsigned int start, size_t len);
t_swap				*lstlast(t_swap *lst);
void				addfront(t_swap **lst, t_swap *new);
void				sort_3(t_swap **stack);
int					lstsize(t_swap *lst);
int					big_number(void *node, int t_len);
int					*long_inc_subs(t_swap **stack, int *array, int *sub_seq,
						int *max_lenght);
int					max(int i, int j);
void				allocation(int **array, int **lenght, int **sub_seq, int l);
void				most_lkhadma(int *lenght, int *array, int *sub_seq, int l);
int					*fill_array(int *array, t_swap **stack);
void				get_the_lis_in_a(t_swap **a, t_swap **b, int *array,
						int *len);
void				print_stack(t_swap *head);
int					find_correct_position_a(t_swap **a, int number);
void				find_the_position(t_swap **a, t_swap **b, int pos[2]);
void				push_number(t_swap **a, t_swap **b);
int					positive(int a, int b);
int					negative(int a, int b);
void				case3(t_swap **a, t_swap **b, int *move);
void				case1(t_swap **a, t_swap **b, int *move);
void				case2(t_swap **a, t_swap **b, int *move);
void				mixte(int p_a, int p_b, int *move);
void				if_negative(int p_a, int p_b, int *move);
void				if_positive(int p_a, int p_b, int *move);
int					ft_abs(int a);
int					check_duplicate(t_swap **a);
int					sorted(t_swap **a);
int					checknumber(char *str);
void				push_to_b(t_swap **a, t_swap **b, int *len, int *array);
void				fill_array_w_lis(int **array, t_swap **a, int *len);
void				ft_lstclear(t_swap **lst, void (*del)(void *));
void				ft_lstdelone(t_swap *lst, void (*del)(void *));
void				del(void *ptr);
void				error_gen(void);
int					ft_strlen(char *str);
int					check_spaces(char **av);
void				takmila1(int size, t_swap **a, t_swap *ras,
						t_swap *current);
int					takmila(t_swap *current, int *len, int *array);
#endif