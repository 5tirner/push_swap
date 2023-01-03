/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/03 03:18:36 by zasabri          ###   ########.fr       */
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

t_list	*rotate_a_algo(t_list *head)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = head;
	ft_lstadd_back(&head, ft_lstnew(ptr->content));
	while (head)
	{
		if (i == 0)
		{
			free(head);
			head = head->next;
		}
		printf("%s\n", head->content);
		head = head->next;
		i++;
	}
	return 0;
}
t_list	*rev_rotate_a_algo(t_list *head)
{
	t_list	*ptr;
	t_list	*save;

	ptr = NULL;
	save = head;
	while (head)
	{
		ptr = head;
		head = head->next;
	}
	ft_lstadd_front(&save, ft_lstnew(ptr->content));
	while (save)
	{
		printf("%s\n", save->content);
		save = save->next;
		if (save->next == NULL)
		{
			free(save);
			break;
		}
	}
	return (save);
}
