/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:08:23 by zasabri          ###   ########.fr       */
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
	ft_lstadd_back(head, ft_lstnew(ptr->content));
}

void	rev_rotate_a_algo_bonus(t_list **head)
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
}

void	push_a_algo_bonus(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head2) == 0)
		return ;
	ft_lstadd_front(head, ft_lstnew((*head2)->content));
	*head2 = (*head2)->next;
}
