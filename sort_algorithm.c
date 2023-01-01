/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 00:50:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/01 02:53:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_a_creation(t_list *head, int size)
{
	t_list	*save;
	int		*arr;
	int		i;

	save = head;
	i = 0;
	while (i < size - 1)
		i++;
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

int	*stack_b_creation(int size)
{
	int		*arr;
	int		i;

	i = 0;
	while (i < size - 1)
		i++;
	arr = malloc(i * 4);
	return (arr);
}

void	sort_algorithm(t_list *head, int size)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = stack_a_creation(head, size);
	stack_b = stack_b_creation(size);
}