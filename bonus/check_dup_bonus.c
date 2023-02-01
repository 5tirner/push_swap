/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:01:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:02:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	norm_thing_for_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				error_generate();
			}
			j++;
		}
		i++;
	}
}

void	if_dup(t_list *head)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	size = ft_lstsize(head);
	arr = malloc(size * 4);
	while (head)
	{
		arr[i] = head->content;
		i++;
		head = head->next;
	}
	norm_thing_for_duplicates(arr, size);
	free(arr);
}
