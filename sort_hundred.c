/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/29 23:48:08 by zasabri          ###   ########.fr       */
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
	
	mid	= ft_lstsize(*head) / 2 - 1;
	offest = ft_lstsize(*head) / mid;
	start = mid - offest;
	end = mid + offest;
	i = -1;
	while (i < end)
	{
		if ((*head)->content >= arr[start] && (*head)->content <= arr[end])
		{
			push_b_algo(head, head2);
			if ((*head2)->content < arr[mid])
				rotate_b_algo(head2);
		}
		else
		{
			rotate_a_algo(head);
			i++;
		}
	}
}
