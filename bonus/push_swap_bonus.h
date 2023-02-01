/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:31:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 14:42:42 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./GNL/get_next_line.h"
# include "../push_swap.h"

void	if_dup(t_list *head);
void	if_alr_sort(t_list *head);
void	checker_aplly(t_list **head, t_list **head2);
#endif