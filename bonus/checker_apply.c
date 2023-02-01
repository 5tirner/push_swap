/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_apply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:06:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 14:51:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_ok_or_ko(t_list *head)
{
	int	i;
	int	l;
	int	*arr;

	i = 0;
	l = ft_lstsize(head);
	arr = malloc(4 * l);
	while (head)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	i = 0;
	while (i < l - 1)
	{
		if (arr[i] > arr[i + 1])
			break ;
		i++;
	}
	free(arr);
	if (i + 1 == l)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	checker_aplly(t_list **head, t_list **head2)
{
	char	*line;
	
	while (1)
	{
		line = get_next_line(0);
		if (ft_strnstr(line, "sa\n", 3))
			swap_a_algo(head);
		else if (ft_strnstr(line, "ra\n", 3))
			rotate_a_algo(head);
		else if (ft_strnstr(line, "rra\n", 4))
			rev_rotate_a_algo(head);
		else if (ft_strnstr(line, "pa\n", 3))
			push_a_algo(head, head2);
		else if (ft_strnstr(line, "sb\n", 3))
			swap_b_algo(head2);
		else if (ft_strnstr(line, "rb\n", 3))
			rotate_b_algo(head2);
		else if (ft_strnstr(line, "rrb\n", 4))
			rev_rotate_b_algo(head2);
		else if (ft_strnstr(line, "pb\n", 3))
			push_b_algo(head, head2);
		else if (ft_strnstr(line, "ss\n", 3))
			swap_a_and_b(head, head2);
		else if (ft_strnstr(line, "rr\n", 3))
			rotate_a_and_b(head, head2);
		else if (ft_strnstr(line, "rrr\n", 4))
			reverse_rotate_a_and_b(head, head2);
		else
			error_generate();
		free(line);
		if (line == NULL)
			break;
	}
	print_ok_or_ko(*head);
}