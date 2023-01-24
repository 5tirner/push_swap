/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/24 03:28:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_it_top_push_it_b(t_list **head, t_list **head2)
{
	int	i;

	while (1)
	{
		i = index_of_the_small_one(*head);
		if (i == 0)
			break ;
		else if (i >= 1 && i <= 50)
			rotate_a_algo(head);
		else
			rev_rotate_a_algo(head);
	}
	push_b_algo(head, head2);
}

void	hundreds(t_list **head, t_list **head2, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		move_it_top_push_it_b(head, head2);
	while (--i > -1)
		push_a_algo(head, head2);
}
