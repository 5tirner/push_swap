/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:31:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:11:45 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./GNL/get_next_line.h"
# include "../push_swap.h"

void	if_dup(t_list *head);
void	if_alr_sort(t_list *head);
void	checker_aplly(t_list **head, t_list **head2);
void	swap_a_algo_bonus(t_list **head);
void	rotate_a_algo_bonus(t_list **head);
void	rev_rotate_a_algo_bonus(t_list **head);
void	push_a_algo_bonus(t_list **head, t_list **head2);
void	swap_b_algo_bonus(t_list **head2);
void	rotate_b_algo_bonus(t_list **head2);
void	rev_rotate_b_algo_bonus(t_list **head2);
void	push_b_algo_bonus(t_list **head, t_list **head2);
void	swap_a_and_b_bonus(t_list **head, t_list **head2);
void	rotate_a_and_b_bonus(t_list **head, t_list **head2);
void	reverse_rotate_a_and_b_bonus(t_list **head, t_list **head2);
#endif