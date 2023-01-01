/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/01 02:49:45 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_algo(int	*stack_a, int size)
{
	int	i;
	int swap;

	i = 0;
	if (size <= 1)
		return ;
	else
	{
		swap = stack_a[i];
		stack_a[i] = stack_a[i + 1];
		stack_a[i + 1] = swap;
	}
}

void	swap_b_algo(int *stack_b, int size)
{
	int	i;
	int swap;

	i = 0;
	if (size <= 1)
		return ;
	else
	{
		swap = stack_b[i];
		stack_b[i] = stack_b[i + 1];
		stack_b[i + 1] = swap;
	}
}

void	swap_a_and_b_algo(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	i;
	int swap;

	i = 0;
	if (size_a <= 1)
		return ;
	else
	{
		swap = stack_a[i];
		stack_a[i] = stack_a[i + 1];
		stack_a[i + 1] = swap;
	}
	if (size_b <= 1)
		return ;
	else
	{
		swap = stack_b[i];
		stack_b[i] = stack_b[i + 1];
		stack_b[i + 1] = swap;
	}
}
