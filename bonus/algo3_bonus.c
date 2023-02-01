/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:09 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:19:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a_and_b_bonus(t_list **head, t_list **head2)
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
}

void	rotate_a_and_b_bonus(t_list **head, t_list **head2)
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
}

void	norm_the_rrr_bonus(t_list **head)
{
	t_list	*ptr;
	t_list	*save;

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
}

void	reverse_rotate_a_and_b_bonus(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) <= 1 && ft_lstsize(*head2) <= 1)
		return ;
	if (ft_lstsize(*head) > 1)
		norm_the_rrr_bonus(head);
	if (ft_lstsize(*head2) > 1)
		norm_the_rrr_bonus(head2);
}
