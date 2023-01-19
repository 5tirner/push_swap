/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_already_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:40:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 18:40:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_already_sort(t_list *head)
{
	int i;
	int l = ft_lstsize(head);
	int	arr[l];
	int	t;

	i = 0;
	t = 0;
	while (head)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	i = 0;
	while (i < l - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			t = 1;
			break;
		}
		i++;
	}
	if (t == 0)
		exit(0);
}
