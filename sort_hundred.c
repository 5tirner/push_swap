/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/24 02:37:58 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	small_one(t_list *head)
{
	int	small;
	
	small = 2147483647;
	while (head)
	{
		if (head->content < small)
			small = head->content;
		head = head->next;
	}
	return (small);
}

void	move_it_top_push_it_b(t_list **head, t_list **head2)
{
	int	i;

	while (1)
	{
		i = index_of_the_small_one(*head);
		if (i == 0)
			break;
		else if (i >= 1 && i <= 50)
			rotate_a_algo(head);
		else
			rev_rotate_a_algo(head);
	}
	push_b_algo(head, head2);
}
void	hundred_one(t_list **head, t_list **head2)
{
	small_one(*head);
	move_it_top_push_it_b(head, head2);
}