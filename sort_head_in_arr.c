/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_head_in_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:05:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/29 22:23:20 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_arr(t_list *head)
{
	int	i;
	int	size;
	int	swap;
	int	*arr;

	size = ft_lstsize(head);
	i = 0;
	arr = malloc(size * 4);
	while (head)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			swap = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
	return (arr);
}
