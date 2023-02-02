/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/02 17:52:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a_algo_bonus(t_list **head)
{
	t_list	*swap;

	if (ft_lstsize(*head) <= 1)
		return ;
	swap = *head;
	*head = (*head)->next;
	swap->next = (*head)->next;
	(*head)->next = swap;
}

void	rotate_a_algo_bonus(t_list **head)
{
	t_list	*ptr;

	if (ft_lstsize(*head) <= 1)
		return ;
	ptr = *head;
	*head = (*head)->next;
	ft_lstadd_back(head, ptr);
	ptr->next = NULL;
}

void	rev_rotate_a_algo_bonus(t_list **head)
{
	t_list	*ptr;
	t_list	*save;

	if (ft_lstsize(*head) <= 1)
		return ;
	if (ft_lstsize(*head) == 2)
		swap_a_algo(head);
	else
	{
		ptr = *head;
		while (ptr->next->next)
			ptr = ptr->next;
		save = ptr->next;
		ptr->next = NULL;
		ft_lstadd_front(head, save);
	}
}

void	push_a_algo_bonus(t_list **head, t_list **head2)
{
	t_list	*ls;

	if (ft_lstsize(*head2) == 0)
		return ;
	ft_lstadd_front(head, ft_lstnew((*head2)->content));
	ls = (*head2)->next;
	free(*head2);
	*head2 = ls;
}
