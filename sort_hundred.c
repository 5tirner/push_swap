/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/25 09:18:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_it_top_push_it_b(t_list **head, t_list **head2)
{
	int	i;

	while (1)
	{
		i = index_of_the_small_one(*head);
		if (ft_lstsize(*head) == 100)
		{
			if (i == 0)
				break ;
			else if (i >= 1 && i <= 50)
				rotate_a_algo(head);
			else
				rev_rotate_a_algo(head);
		}
		else
		{
			if (i == 0)
				break ;
			else if (i >= 1 && i <= 250)
				rotate_a_algo(head);
			else
				rev_rotate_a_algo(head);
		}
	}
	push_b_algo(head, head2);
}

void	sort_it_in_arr(t_arr *sort_arr, t_list *head)
{
	int	i;
	int	size;
	int	swap;
	
	size = ft_lstsize(head);
	i = 0;
	sort_arr->arr = malloc(size * 4);
	while (head)
	{
		sort_arr->arr[i] = head->content;
		head = head->next;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (sort_arr->arr[i] > sort_arr->arr[i + 1])
		{
			swap = sort_arr->arr[i];
			sort_arr->arr[i] = sort_arr->arr[i + 1];
			sort_arr->arr[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

void	hundreds(t_list **head, t_list **head2, int size)
{
	int		i;
	t_arr	sort_arr;

	sort_it_in_arr(&sort_arr, *head);
	i = -1;
	head2 = NULL;
	while (++i < size)
		move_it_top_push_it_b(head, head2);
	while (--i > -1)
		push_a_algo(head, head2);
}
