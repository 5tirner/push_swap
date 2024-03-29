/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 00:50:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/31 09:12:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algorithm(t_list **head, t_list **head2)
{
	int	size;
	int	*arr;

	arr = fill_arr(*head);
	size = ft_lstsize(*head);
	if (size == 2 && (*head)->content > (*head)->next->content)
		swap_a_algo(head);
	else if (size == 3)
		swap_three(head);
	else if (size == 4)
		swap_four(head, head2);
	else if (size == 5)
		swap_five(head, head2);
	else if (size >= 6 && size <= 500)
		hundreds(head, head2, arr);
	free(arr);
}
