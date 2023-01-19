/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_already_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:40:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/19 18:57:10 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_already_sort(t_list *head)
{
	int	i;
	int	l;
	int	*arr;

	i = 0;
	l = ft_lstsize(head);
	arr = malloc(4 * l);
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
			break ;
		i++;
	}
	free(arr);
	if (i + 1 == l)
		exit(0);
}
