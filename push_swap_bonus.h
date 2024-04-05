/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:52:20 by agaougao          #+#    #+#             */
/*   Updated: 2024/03/28 22:59:17 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./get_next_line/get_next_line.h"
# include "push_swap.h"
# include <stdio.h>
# include <stdlib.h>

void	sa_bonus(t_swap **a);
void	sb_bonus(t_swap **b);
void	ss_bonus(t_swap **a, t_swap **b);
void	ra_bonus(t_swap **a);
void	rb_bonus(t_swap **b);
void	rr_bonus(t_swap **a, t_swap **b);
void	rra_bonus(t_swap **a);
void	rrb_bonus(t_swap **b);
void	rrr_bonus(t_swap **a, t_swap **b);
void	pa_bonus(t_swap **a, t_swap **b);
void	pb_bonus(t_swap **a, t_swap **b);
void	error_gen(void);
int		chek(t_swap **a);
int		ft_strcmp(char *s1, char *s2);

#endif