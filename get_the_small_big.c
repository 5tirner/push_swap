/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_small_big.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:12:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/24 03:27:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of_the_big_one(t_list *head)
{
	int		big;
	int		i;
	t_list	*save;

	i = 0;
	big = -2147483648;
	save = head;
	while (head)
	{
		if (head->content > big)
			big = head->content;
		head = head->next;
	}
	while (save)
	{
		if (big == save->content)
			break ;
		i++;
		save = save->next;
	}
	return (i);
}

int	index_of_the_small_one(t_list *head)
{
	int		small;
	int		i;
	t_list	*save;

	i = 0;
	small = 2147483647;
	save = head;
	while (head)
	{
		if (head->content < small)
			small = head->content;
		head = head->next;
	}
	while (save)
	{
		if (small == save->content)
			break ;
		i++;
		save = save->next;
	}
	return (i);
}
