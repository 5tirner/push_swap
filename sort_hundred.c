/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/30 10:58:32 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hundreds(t_list **head, t_list **head2, int *arr)
{
	int	i;
	int	range;
	
	i = 0;
	if (ft_lstsize(*head) >= 6 && ft_lstsize(*head) <= 16)
		range = 3;
	else if (ft_lstsize(*head) <= 100)
		range = 15;
	else if (ft_lstsize(*head) <= 500)
		range = 25;
	while (*head)
	{
		if ((*head)->content == arr[i])
		{
			push_b_algo(head, head2);
			rotate_b_algo(head2);
			i++;
		}
		else if ((*head)->content >= arr[i] && (*head)->content <= arr[range])
			push_b_algo(head, head2);
		else
		{
			rotate_a_algo(head);
			range++;
		}
	}
	
}
