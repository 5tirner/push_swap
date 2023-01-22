/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:16:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/22 20:25:15 by zasabri          ###   ########.fr       */
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
		ft_lstadd_back(head, ft_lstnew(ptr->content));
	}
	if (ft_lstsize(*head2) > 1)
	{
		ptr = *head2;
		*head2 = (*head2)->next;
		ft_lstadd_back(head2, ft_lstnew(ptr->content));
	}
	ft_printf("rr\n");
}

void	reverse_rotate_a_and_b(t_list **head, t_list **head2)
{
	t_list	*ptr;
	t_list	*save;

	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head) > 1)
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		save = ft_lstnew(ptr->content);
		while ((*head)->next)
		{
			ft_lstadd_back(&save, ft_lstnew((*head)->content));
			*head = (*head)->next;
		}
		(*head) = save;
	}
	if (ft_lstsize(*head2) > 1)
	{
		ptr = *head2;
		while (ptr->next)
			ptr = ptr->next;
		save = ft_lstnew(ptr->content);
		while ((*head2)->next)
		{
			ft_lstadd_back(&save, ft_lstnew((*head2)->content));
			*head2 = (*head2)->next;
		}
		(*head2) = save;
	}
	ft_printf("rrr\n");
}
