/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:01:47 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/01 02:00:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    ft_all_is_good(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if ((av[i] < '0' || av[i] > '9')
			&& (av[i] != '-' && av[i] != '+'))
		{
			ft_printf("Error\n");
			ft_printf("Probleme with this argement: %s\n", av);
			exit(0);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int		i;
	t_list	*head;

	head = NULL;
	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			ft_all_is_good(av[i]);
			ft_lstadd_back(&head, ft_lstnew(av[i]));
			i++;
		}
		sort_algorithm(head);
	}
	else
		ft_printf("Invalid number of argements\n");
}
