/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/31 00:21:36 by zasabri          ###   ########.fr       */
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
			break;
		else if (i <= size / 2)
			rotate_b_algo(head2);
		else if (i > size / 2)
			rev_rotate_b_algo(head2);
	}
}

// void	small_to_top(t_list **head, int size)
// {
// 	int	i;

// 	while (1)
// 	{
// 		i = index_of_the_small_one(*head);
// 		if (i == 0)
// 			break;
// 		else if (i <= size / 2)
// 			rotate_b_algo(head);
// 		else if (i > size / 2)
// 			rev_rotate_b_algo(head);
// 	}
// }

void	from_head_to_head2(t_list **head, t_list **head2, int *arr, int range)
{
	int	i;

	i = 0;
	(void)range;
	while (*head)
	{
		if ((*head)->content <= arr[i])
		{
			push_b_algo(head, head2);
			rotate_b_algo(head2);
			i++;
		}
		else if ((*head)->content > arr[i] && (*head)->content <= arr[15 + i])
		{
			push_b_algo(head, head2);
			i++;
		}
		else
			rotate_a_algo(head);
	}
}

// void	back_to_head(t_list **head, t_list **head2, int *arr, int range)
// {
// 	int	i;

// 	i = 0;
// 	while (*head2)
// 	{
// 		if ((*head2)->content == arr[i])
// 		{
// 			push_a_algo(head, head2);
// 			rotate_a_algo(head);
// 			i++;
// 		}
// 		else if ((*head2)->content >= arr[i] && (*head2)->content <= arr[range])
// 			push_a_algo(head, head2);
// 		else
// 		{
// 			rotate_b_algo(head2);
// 			range+=i;
// 		}
// 	}
// }

void	hundreds(t_list **head, t_list **head2, int *arr)
{
	int	range;
	
	if (ft_lstsize(*head) >= 6 && ft_lstsize(*head) <= 16)
		range = 3;
	else if (ft_lstsize(*head) <= 100)
		range = 33;
	else if (ft_lstsize(*head) <= 500)
		range = 70;
	else
		exit(0);
	from_head_to_head2(head, head2, arr, range);
	// if (ft_lstsize(*head2) >= 6 && ft_lstsize(*head2) <= 16)
	// 	range = 3;
	// else if (ft_lstsize(*head2) <= 100)
	// 	range = 33;
	// else if (ft_lstsize(*head2) <= 500)
	// 	range = 70;
	// else
	// 	exit(0);
	// back_to_head(head, head2, arr, range);
	while (*head2)
	{
		big_to_top(head2, ft_lstsize(*head2));
		push_a_algo(head, head2);
	}
}
