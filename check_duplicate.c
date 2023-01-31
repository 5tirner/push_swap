/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 03:34:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/31 10:21:08 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void	if_duplcated(t_list *head)
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
