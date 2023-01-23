/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_three_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:03:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/23 23:57:49 by zasabri          ###   ########.fr       */
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
	else if  ((*head)->content > (*head)->next->content)
		swap_a_algo(head);
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

void	small_to_up(t_list **head, int i)
{
	if (i == 1)
		swap_a_algo(head);
	else if (i == 2)
	{
		rotate_a_algo(head);
		rotate_a_algo(head);
	}
	else if (i == 3)
		rev_rotate_a_algo(head);
}

void	swap_four(t_list **head, t_list **head2)
{
	int	i;

	i = index_of_the_small_one(*head);
	small_to_up(head, i);
	push_b_algo(head, head2);
	swap_three(head);
	push_a_algo(head, head2);
}

void	swap_five(t_list **head, t_list **head2)
{
	int	i;
	
	i = index_of_the_big_one(*head);
	big_to_up(head, i);
	push_b_algo(head, head2);
	i = index_of_the_small_one(*head);
	small_to_up(head, i);
	push_b_algo(head, head2);
	swap_three(head);
	push_a_algo(head, head2);
	push_a_algo(head, head2);
	rotate_a_algo(head);
}
