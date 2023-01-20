/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:16:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 21:22:46 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_and_b(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	swap_a_algo(head);
	swap_b_algo(head2);
	ft_printf("ss\n");
	
}

void	rotate_a_and_b(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	rotate_a_algo(head);
	rotate_b_algo(head2);
	ft_printf("rr\n");
}

void	reverse_rotate_a_and_b(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	rev_rotate_a_algo(head);
	rev_rotate_b_algo(head2);
	ft_printf("rrr\n");
}