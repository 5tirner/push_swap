/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/28 22:34:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*chunks(t_arr *array, int size)
{
	int	i;
	int	*save;

	i = -1;
	if (size > 20 && size <= 250)
	{
		save = malloc(20 * 4);
		while (++i < 20 && array->place < size)
		{
			save[i] = array->arr[array->place];
			array->place++;
		}
	}
	else
	{
		save = malloc(25 * 4);
		while (++i < 25 && array->place < size - 1)
		{
			save[i] = array->arr[i];
			array->place++;
		}
	}
	return (save);
}

int	find_the_index(t_list *head, int nb)
{
	int	i;

	i = 0;
	while (head)
	{
		if (nb == head->content)
			break ;
		i++;
		head = head->next;
	}
	return (i);
}

int	get_the_right_number(t_list *head, int *arr)
{
	int	i;

	while (head)
	{
		i = 0;
		while (i < 20)
		{
			if (arr[i] == head->content)
				return (find_the_index(head, head->content));
			i++;
		}
		head = head->next;
	}
	return (1000);
}

void	move_it_top_push_it_b(t_list **head, t_list **head2)
{
	int	i;

	while (1)
	{
		i = index_of_the_small_one(*head);
		if (i == 0)
			break ;
		else if (i >= 1 && i <= ft_lstsize(*head) / 2)
			rotate_a_algo(head);
		else
			rev_rotate_a_algo(head);
	}
	push_b_algo(head, head2);
}

void	almost_sort_in_b(t_list **head, t_list **head2, t_arr *array)
{
	int	i;

	while (1)
	{
		i = get_the_right_number(*head, array->arr);
		if (i == 1000)
			return ;
		else if (i == 0)
			break ;
		else if (i >= 1 && i <= ft_lstsize(*head) / 2)
			rotate_a_algo(head);
		else
			rev_rotate_a_algo(head);
	}
	push_b_algo(head, head2);
}

void	hundreds(t_list **head, t_list **head2, int size)
{
	t_arr	sort_arr;
	int		*chunk;

	if (size >= 6 && size <= 20)
	{
		while (*head)
			move_it_top_push_it_b(head, head2);
		while (*head2)
			push_a_algo(head, head2);
	}
	else if (size > 20 && size <= 500)
	{
		sort_arr.place = 0;
		sort_it_in_arr(&sort_arr, *head);
		while (head)
		{
			chunk = chunks(&sort_arr, size);
			almost_sort_in_b(head, head2, &sort_arr);
		}
	}
}
