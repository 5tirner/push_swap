/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:01:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/02 17:44:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b_algo(t_list **head2)
{
	t_list	*swap;

	if (ft_lstsize(*head2) <= 1)
		return ;
	swap = *head2;
	*head2 = (*head2)->next;
	swap->next = (*head2)->next;
	(*head2)->next = swap;
	ft_printf("sb\n");
}

void	rotate_b_algo(t_list **head2)
{
	t_list	*ptr;

	if (ft_lstsize(*head2) <= 1)
		return ;
	ptr = *head2;
	*head2 = (*head2)->next;
	ft_lstadd_back(head2, ptr);
	ptr->next = NULL;
	ft_printf("rb\n");
}

void	rev_rotate_b_algo(t_list **head2)
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
	ft_printf("rrb\n");
}

void	push_b_algo(t_list **head, t_list **head2)
{
	t_list	*ls;

	if (ft_lstsize(*head) == 0)
		return ;
	ft_lstadd_front(head2, ft_lstnew((*head)->content));
	ls = (*head)->next;
	free(*head);
	*head = ls;
	ft_printf("pb\n");
}
