/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/21 19:46:41 by zasabri          ###   ########.fr       */
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
	ft_printf("->sa\n");
}

void	rotate_a_algo(t_list **head)
{
	t_list	*ptr;

	if (ft_lstsize(*head) <= 1)
		return ;
	ptr = *head;
	*head = (*head)->next;
	ft_lstadd_back(head, ft_lstnew(ptr->content));
	printf("->ra\n");
}

void	rev_rotate_a_algo(t_list **head)
{
	t_list	*ptr;
	t_list	*save;

	if (ft_lstsize(*head) <= 1)
		return ;
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
	ft_printf("->rra\n");
}

void	push_a_algo(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head2) == 0)
		return ;
	ft_lstadd_front(head, ft_lstnew((*head2)->content));
	*head2 = (*head2)->next;
	ft_printf("->pa\n");
}
