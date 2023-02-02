/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/02 17:50:46 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_algo(t_list **head)
{
	t_list	*swap;

	if (ft_lstsize(*head) <= 1)
		return ;
	swap = *head;
	*head = (*head)->next;
	swap->next = (*head)->next;
	(*head)->next = swap;
	ft_printf("sa\n");
}

void	rotate_a_algo(t_list **head)
{
	t_list	*ptr;

	if (ft_lstsize(*head) <= 1)
		return ;
	ptr = *head;
	*head = (*head)->next;
	ft_lstadd_back(head, ptr);
	ptr->next = NULL;
	ft_printf("ra\n");
}

void	rev_rotate_a_algo(t_list **head)
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
	ft_printf("rra\n");
}

void	push_a_algo(t_list **head, t_list **head2)
{
	t_list	*ls;

	if (ft_lstsize(*head2) == 0)
		return ;
	ft_lstadd_front(head, ft_lstnew((*head2)->content));
	ls = (*head2)->next;
	free(*head2);
	*head2 = ls;
	ft_printf("pa\n");
}
