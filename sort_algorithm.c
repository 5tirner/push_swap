/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 00:50:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/01 01:43:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*array_creation(t_list *head)
{
	t_list	*save;
	int		*arr;
	int		i;

	save = head;
	i = 0;
	while (head)
	{
		head=head->next;
		i++;
	}
	arr = malloc(i * 4);
	i = 0;
	while (save)
	{
		arr[i] = ft_atoi(save->content);
		save = save->next;
		i++;
	}
	return (arr);
}

void	sort_algorithm(t_list *head)
{
	int	*arr;
	int	i;
	int	size;
	int	swap;

	i = 0;
	arr = array_creation(head);
	size = 0;
	while (head)
	{
		head = head->next;
		size++;
	}
	printf("%d\n\n", size);
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
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ft_printf(" - ");
		ft_printf("%d", arr[i]);
		i++;
	}
}