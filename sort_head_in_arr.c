/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_head_in_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:05:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/27 23:06:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
