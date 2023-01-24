/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:01:47 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/24 02:45:24 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sign(const char *str)
{
	int	sign;
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
				sign = 1;
			else if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
				sign = -1;
			else
			{
				ft_printf("Error\n");
				exit(1);
			}
			i++;
		}
		i++;
	}
	return (sign);
}

int	ft_check_over(int sign)
{
	sign = 0;
	ft_printf("Error\n");
	exit(1);
}

int	ft_int(const char *str)
{
	int		i;
	int		sign;
	int		res;
	int		t;

	i = 0;
	sign = 1;
	res = 0;
	if (ft_strncmp(str, "-2147483648", 11) == 0)
		return (-2147483648);
	while (str[i] == '+' || str[i] == '-')
	{
		sign = ft_sign(str);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		t = res * 10 + str[i] - 48;
		if (t < res)
			return (ft_check_over(sign));
		res = t;
		i++;
	}
	return (res * sign);
}

void	ft_all_is_good(char *av)
{
	int	i;

	i = 0;
	if (!av[0])
	{
		printf("Error\n");
		exit(1);
	}
	while (av[i])
	{
		if ((av[i] < '0' || av[i] > '9')
			&& (av[i] != '-' && av[i] != '+') && (av[i] != ' ')
			&& (av[i] != 34))
		{
			ft_printf("Error\n");
			ft_printf("Probleme with this argement: %s\n", av);
			exit(0);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*head;
	t_list	*head2;
	char	**str;
	int		j;

	if (ac == 1)
		return (0);
	head = NULL;
	head2 = NULL;
	i = 1;
	while (av[i])
	{
		ft_all_is_good(av[i]);
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			ft_lstadd_back(&head, ft_lstnew(ft_int(str[j])));
			j++;
		}
		i++;
	}
	if_already_sort(head);
	sort_algorithm(&head, &head2);
	while (head)
	{
		printf("%d\n", head->content);
		head=head->next;
	}
	printf("--------\n");
	while (head2)
	{
		printf("%d\n", head2->content);
		head2=head2->next;
	}
}
