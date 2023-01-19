/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:01:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 19:36:10 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b_algo(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) == 0)
		return ;
	ft_lstadd_front(head2, ft_lstnew((*head)->content));
	*head = (*head)->next;
	ft_printf("->pb\n");
}