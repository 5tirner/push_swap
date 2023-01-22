/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_three_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:03:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/22 20:27:03 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_three(t_list **head)
{
	if ((*head)->content > (*head)->next->content
		&& (*head)->next->content > (*head)->next->next->content)
	{
		rotate_a_algo(head);
		swap_a_algo(head);
	}
	else if ((*head)->content > (*head)->next->content
		&& (*head)->next->content < (*head)->next->next->content
		&& (*head)->content > (*head)->next->next->content)
		rotate_a_algo(head);
	else if ((*head)->content < (*head)->next->content
		&& (*head)->next->content > (*head)->next->next->content
		&& (*head)->content < (*head)->next->next->content)
	{
		swap_a_algo(head);
		rotate_a_algo(head);
	}
	else if ((*head)->content < (*head)->next->content
		&& (*head)->next->content > (*head)->next->next->content
		&& (*head)->content > (*head)->next->next->content)
		rev_rotate_a_algo(head);
	else
		swap_a_algo(head);
}

int	index_of_the_big_one(t_list *head)
{
	int		big;
	int		i;
	t_list	*save;

	i = 0;
	big = -2147483648;
	save = head;
	while (head)
	{
		if (head->content > big)
			big = head->content;
		head = head->next;
	}
	while (save)
	{
		if (big == save->content)
			break ;
		i++;
		save = save->next;
	}
	return (i);
}

void	big_to_up(t_list **head, int i)
{
	if (i == 1)
		rotate_a_algo(head);
	else if (i == 2)
	{
		rotate_a_algo(head);
		rotate_a_algo(head);
	}
	else if (i == 3)
	{
		rev_rotate_a_algo(head);
		rev_rotate_a_algo(head);
	}
	else if (i == 4)
		rev_rotate_a_algo(head);
}

void	swap_five(t_list **head, t_list **head2)
{
	int	i;

	i = index_of_the_big_one(*head);
	big_to_up(head, i);
	push_b_algo(head, head2);
	push_b_algo(head, head2);
	swap_three(head);
	push_a_algo(head, head2);
	if ((*head)->content > (*head)->next->next->next->content)
		rotate_a_algo(head);
	else if ((*head)->content > (*head)->next->content
		&& (*head)->content < (*head)->next->next->content)
		swap_a_algo(head);
	else if ((*head)->content > (*head)->next->next->content)
	{
		rev_rotate_a_algo(head);
		swap_a_algo(head);
		rotate_a_algo(head);
		rotate_a_algo(head);
	}
	push_a_algo(head, head2);
	rotate_a_algo(head);
}
