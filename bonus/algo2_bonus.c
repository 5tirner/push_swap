/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:04:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:08:01 by zasabri          ###   ########.fr       */
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
	ft_lstadd_back(head2, ft_lstnew(ptr->content));
}

void	rev_rotate_b_algo_bonus(t_list **head2)
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
}

void	push_b_algo_bonus(t_list **head, t_list **head2)
{
	if (ft_lstsize(*head) == 0)
		return ;
	ft_lstadd_front(head2, ft_lstnew((*head)->content));
	*head = (*head)->next;
}