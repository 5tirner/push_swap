/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/31 10:11:15 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_to_top(t_list **head2, int size)
{
	int	i;

	while (1)
	{
		i = index_of_the_big_one(*head2);
		if (i == 0)
			break ;
		else if (i <= size / 2)
			rotate_b_algo(head2);
		else if (i > size / 2)
			rev_rotate_b_algo(head2);
	}
}

void	from_head_to_head2(t_list **head, t_list **head2, int *arr, int range)
{
	int	i;

	i = 0;
	while (*head)
	{
		if ((*head)->content <= arr[i])
		{
			push_b_algo(head, head2);
			rotate_b_algo(head2);
			i++;
		}
		else if ((*head)->content > arr[i]
			&& (*head)->content <= arr[range + i])
		{
			push_b_algo(head, head2);
			i++;
		}
		else
			rotate_a_algo(head);
	}
}

void	hundreds(t_list **head, t_list **head2, int *arr)
{
	int	range;

	if (ft_lstsize(*head) >= 6 && ft_lstsize(*head) <= 16)
		range = 3;
	else if (ft_lstsize(*head) <= 100)
		range = 13;
	else if (ft_lstsize(*head) <= 500)
		range = 35;
	else
		exit(0);
	from_head_to_head2(head, head2, arr, range);
	while (*head2)
	{
		big_to_top(head2, ft_lstsize(*head2));
		push_a_algo(head, head2);
	}
}
