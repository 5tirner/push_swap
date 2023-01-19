/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 17:38:28 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a_algo(t_list **head)
{
	t_list *swap;
	
	if (ft_lstsize(*head) <= 1)
		return ;
	swap = *head;
	*head = (*head)->next;//Dereference
	swap->next = (*head)->next;
	(*head)->next = swap;
}

void	rotate_algo(t_list **head)
{
	t_list	*ptr;

	if (ft_lstsize(*head) <= 1)
		return ;
	ptr = *head;
	*head = (*head)->next;
	ft_lstadd_back(head, ft_lstnew(ptr->content));
}

void	rev_rotate_algo(t_list **head)
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
