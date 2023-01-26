/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/26 17:33:14 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_index(t_list *head, int nb)
{
	int i;

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

void	sort_it_in_arr(t_arr *sort_arr, t_list *head)
{
	int	i;
	int	size;
	int	swap;
	
	size = ft_lstsize(head);
	i = 0;
	sort_arr->arr = malloc(size * 4);
	while (head)
	{
		sort_arr->arr[i] = head->content;
		head = head->next;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (sort_arr->arr[i] > sort_arr->arr[i + 1])
		{
			swap = sort_arr->arr[i];
			sort_arr->arr[i] = sort_arr->arr[i + 1];
			sort_arr->arr[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

int	*chunks(t_arr *array, int size)
{
	int	i;
	int	*save;

	save = malloc(6);
	i = 0;
	if (size <= 250)
	{
		while (i < 6 && array->place < size)
		{
			save[i] = array->arr[i];
			i++;
			array->place++;
		}
	}
	if (size > 250 && size <= 500)
	{
		while (i < 12 && array->place < size)
		{
			save[i] = array->arr[i];
			i++;
			array->place++;
		}
	}
	return (save);
}

int	get_the_right_number(t_list *head, int *arr)
{
	int	i;

	while (head)
	{
		i = 0;
		while (i < 6)
		{
			if (arr[i] == head->content)
				return (find_the_index(head, head->content));
			i++;
		}
		head = head->next;
	}
	return (0);
}

void	move_it_top_push_it_b(t_list **head, t_list **head2, t_arr *array, int size)
{
	int	i;
	int	*chunk;

	chunk = chunks(array, size);
	while (1)
	{
		i = get_the_right_number(*head, chunk);
		if (i == 0)
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

	sort_arr.place = 0;
	sort_it_in_arr(&sort_arr, *head);
	while (*head)
	{
		move_it_top_push_it_b(head, head2, &sort_arr, size);
		*head = (*head)->next;
	}
}
