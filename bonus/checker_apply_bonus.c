/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_apply_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:01:32 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:18:07 by zasabri          ###   ########.fr       */
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

void	for_head_a(t_list **head, t_list **head2, char *line)
{
	if (ft_strnstr(line, "sa\n", 3))
		swap_a_algo_bonus(head);
	else if (ft_strnstr(line, "ra\n", 3))
		rotate_a_algo_bonus(head);
	else if (ft_strnstr(line, "rra\n", 4))
		rev_rotate_a_algo_bonus(head);
	else if (ft_strnstr(line, "pa\n", 3))
		push_a_algo_bonus(head, head2);
}

void	for_head2(t_list **head, t_list **head2, char *line)
{
	if (ft_strnstr(line, "sb\n", 3))
		swap_b_algo_bonus(head2);
	else if (ft_strnstr(line, "rb\n", 3))
		rotate_b_algo_bonus(head2);
	else if (ft_strnstr(line, "rrb\n", 4))
		rev_rotate_b_algo_bonus(head2);
	else if (ft_strnstr(line, "pb\n", 3))
		push_b_algo_bonus(head, head2);
}

void	for_both(t_list **head, t_list **head2, char *line)
{
	if (ft_strnstr(line, "ss\n", 3))
		swap_a_and_b_bonus(head, head2);
	else if (ft_strnstr(line, "rr\n", 3))
		rotate_a_and_b_bonus(head, head2);
	else if (ft_strnstr(line, "rrr\n", 4))
		reverse_rotate_a_and_b_bonus(head, head2);
}

void	checker_aplly(t_list **head, t_list **head2)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		if (ft_strnstr(line, "sa\n", 3) || ft_strnstr(line, "ra\n", 3)
			|| ft_strnstr(line, "rra\n", 4) || ft_strnstr(line, "pa\n", 3))
			for_head_a(head, head2, line);
		else if (ft_strnstr(line, "sb\n", 3) || ft_strnstr(line, "rb\n", 3)
			|| ft_strnstr(line, "rrb\n", 4) || ft_strnstr(line, "pb\n", 3))
			for_head2(head, head2, line);
		else if (ft_strnstr(line, "ss\n", 3) || ft_strnstr(line, "rr\n", 3)
			|| ft_strnstr(line, "rrr\n", 4))
			for_both(head, head2, line);
		else
		{
			free(line);
			error_generate();
		}
		free(line);
	}
	print_ok_or_ko(*head);
}
