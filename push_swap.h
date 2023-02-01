/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:33:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 11:14:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>

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
void	reverse_rotate_a_and_b(t_list **head, t_list **head2);
void	if_already_sort(t_list *head);
void	swap_three(t_list **head);
void	swap_five(t_list **head, t_list **head2);
void	sort_algorithm(t_list **head, t_list **head2);
int		index_of_the_big_one(t_list *head);
int		index_of_the_small_one(t_list *head);
void	swap_four(t_list **head, t_list **head2);
void	hundreds(t_list **head, t_list **head2, int *arr);
void	error_generate(void);
void	if_duplcated(t_list *head);
int		*fill_arr(t_list *head);
void	free_str(char **str);
#endif