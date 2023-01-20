/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:01:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 21:10:50 by zasabri          ###   ########.fr       */
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
	ft_printf("->sb\n");
}

void	rotate_b_algo(t_list **head2)
{
	t_list	*ptr;

	if (ft_lstsize(*head2) <= 1)
		return ;
	ptr = *head2;
	*head2 = (*head2)->next;
	ft_lstadd_back(head2, ft_lstnew(ptr->content));
	printf("->rb\n");
}

void	rev_rotate_b_algo(t_list **head2)
{
	t_list	*ptr;
	t_list	*save;

	if (ft_lstsize(*head2) <= 1)
		return ;
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
	ft_printf("->rrb\n");
}

void	push_b_algo(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) == 0)
		return ;
	ft_lstadd_front(head2, ft_lstnew((*head)->content));
	*head = (*head)->next;
	ft_printf("->pb\n");
}