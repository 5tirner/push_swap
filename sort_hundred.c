/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:24:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/27 22:14:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if (size > 250 && size <= 500)
	{
		save = malloc(25 * 4);
		while (++i < 25 && array->place < size - 1)
		{
			save[i] = array->arr[i];
			array->place++;
		}
	}
	else
		exit(0);
	return (save);
}

int	find_the_index(t_list *head, int nb)
{
	int i;

	i = 0;
	while (head)
	{
		printf("nb == %d, val == %d\n", nb,head->content);
		if (nb == head->content)
			break ;
		i++;
		head = head->next;
	}
	printf("find i %d\n", i);
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
				return (head->content);
			i++;
		}
		head = head->next;
	}
	return (0);
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

void	hundreds(t_list **head, t_list **head2, int size)
{
	t_arr	sort_arr;
	int		i;

	i = 0;
	if (size >= 6 && size <= 20)
	{
		while (*head)
			move_it_top_push_it_b(head, head2);
		while(*head2)
			push_a_algo(head, head2);
	}
	else
	{
		sort_arr.place = 0;
		sort_it_in_arr(&sort_arr, *head);
		i = 0;
		while (i < size)
			printf("%d ", sort_arr.arr[i++]);
		printf("\n--------\n");
		int *chunk = chunks(&sort_arr, size);
		i =0;
		while (i < 20)
			printf("%d\n", chunk[i++]);
		printf("------\n");
		(*head) = (*head)->next;
		i = get_the_right_number(*head, chunk);
		printf("%d", i);
	}
}
