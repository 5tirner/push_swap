/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:16:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/02 18:07:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_and_b(t_list **head, t_list **head2)
{
	t_list	*swap;

	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head) > 1)
	{
		swap = *head;
		*head = (*head)->next;
		swap->next = (*head)->next;
		(*head)->next = swap;
	}
	if (ft_lstsize(*head2) > 1)
	{
		swap = *head2;
		*head2 = (*head2)->next;
		swap->next = (*head2)->next;
		(*head2)->next = swap;
	}
	ft_printf("ss\n");
}

void	rotate_a_and_b(t_list **head, t_list **head2)
{
	t_list	*ptr;

	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head) > 1)
	{
		ptr = *head;
		*head = (*head)->next;
		ft_lstadd_back(head, ptr);
		ptr->next = NULL;
	}
	if (ft_lstsize(*head2) > 1)
	{
		ptr = *head2;
		*head2 = (*head2)->next;
		ft_lstadd_back(head2, ptr);
		ptr->next = NULL;
	}
	ft_printf("rr\n");
}

void	norm_the_rrr(t_list **head)
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

void	reverse_rotate_a_and_b(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head) > 1)
		norm_the_rrr(head);
	if (ft_lstsize(*head2) > 1)
		norm_the_rrr(head2);
	ft_printf("rrr\n");
}
