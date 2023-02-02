/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:04:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/02 17:53:14 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_b_algo_bonus(t_list **head2)
{
	t_list	*swap;

	if (ft_lstsize(*head2) <= 1)
		return ;
	swap = *head2;
	*head2 = (*head2)->next;
	swap->next = (*head2)->next;
	(*head2)->next = swap;
}

void	rotate_b_algo_bonus(t_list **head2)
{
	t_list	*ptr;

	if (ft_lstsize(*head2) <= 1)
		return ;
	ptr = *head2;
	*head2 = (*head2)->next;
	ft_lstadd_back(head2, ptr);
	ptr->next = NULL;
}

void	rev_rotate_b_algo_bonus(t_list **head2)
{
	t_list	*ptr;
	t_list	*save;

	if (ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head2) == 2)
		swap_a_algo(head2);
	else
	{
		ptr = *head2;
		while (ptr->next->next)
			ptr = ptr->next;
		save = ptr->next;
		ptr->next = NULL;
		ft_lstadd_front(head2, save);
	}
}

void	push_b_algo_bonus(t_list **head, t_list **head2)
{
	t_list	*ls;

	if (ft_lstsize(*head) == 0)
		return ;
	ft_lstadd_front(head2, ft_lstnew((*head)->content));
	ls = (*head)->next;
	free(*head);
	*head = ls;
}
