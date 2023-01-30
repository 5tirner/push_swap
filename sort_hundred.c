/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/30 04:26:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hundreds(t_list **head, t_list **head2, int *arr)
{
	int	mid;
	int	offest;
	int	start;
	int	end;
	int	i;
	int size = ft_lstsize(*head);
	
	mid	= ft_lstsize(*head) / 2 - 1;
	offest = ft_lstsize(*head) / mid;
	start = mid - offest;
	end = mid + offest;
	i = 0;
	while (i < size)
	{
		if ((*head)->content >= arr[start] && (*head)->content <= arr[end])
		{
			push_b_algo(head, head2);
			if ((*head2)->content < arr[mid])
				rotate_b_algo(head2);
			i = 0;
		}
		else
		{
			rotate_a_algo(head);
			i++;
		}
		if (i == end)
		{
			start -= offest;
			end += offest;
		}
	}
	push_b_algo(head, head2);
	if ((*head2)->content < (*head2)->next->content)
		swap_b_algo(head2);
	push_a_algo(head, head2);
	// while (head2)
	// {
	// 	push_a_algo(head, head2);
	// 	// if ((*head)->content > (*head)->next->content)
	// 	// 	rotate_a_algo(head);
	// }
}
