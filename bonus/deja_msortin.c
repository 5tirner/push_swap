/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deja_msortin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:46:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 13:53:04 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	if_alr_sort(t_list *head)
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
