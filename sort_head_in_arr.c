/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_head_in_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:05:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 17:15:05 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_arr(t_list *head)
{
	int		*arr;
	t_vars	var;

	var.size = ft_lstsize(head);
	var.i = -1;
	arr = malloc(var.size * 4);
	while (head)
	{
		arr[++var.i] = head->content;
		head = head->next;
	}
	var.i = 0;
	while (var.i < var.size - 1)
	{
		if (arr[var.i] > arr[var.i + 1])
		{
			var.swap = arr[var.i];
			arr[var.i] = arr[var.i + 1];
			arr[var.i + 1] = var.swap;
			var.i = 0;
		}
		else
			var.i++;
	}
	return (arr);
}
