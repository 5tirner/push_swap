/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:33:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 21:23:21 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>

void	sort_algorithm(t_list *head, int size);
void	swap_a_algo(t_list **head);
void	rotate_a_algo(t_list **head);
void	rev_rotate_a_algo(t_list **head);
void	push_a_algo(t_list **head, t_list **head2);
void	swap_b_algo(t_list **head2);
void	rotate_b_algo(t_list **head2);
void	rev_rotate_b_algo(t_list **head2);
void	push_b_algo(t_list **head, t_list **head2);
void	swap_a_and_b(t_list **head, t_list **head2);
void	rotate_a_and_b(t_list **head, t_list **head2);
void	reverse_rotate_a_and_b(char **head, char **head2);
void	if_already_sort(t_list *head);
#endif