/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/29 22:55:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hundreds(t_list **head, t_list **head2, int mid)
{
	int	*arr;

	arr = fill_arr(*head);
	while (head)
	{
		push_b_algo(head, head2);
		if ((*head2)->content < arr[mid])
			rotate_b_algo(head2);
		*head = (*head)->next;
	}
}
