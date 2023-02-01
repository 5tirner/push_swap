/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:01:47 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 16:58:32 by zasabri          ###   ########.fr       */
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
				error_generate();
			i++;
		}
		i++;
	}
	return (sign);
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
			error_generate();
		res = t;
		i++;
	}
	return (res * sign);
}

void	ft_all_is_good(char *av)
{
	int	i;
	int	sign_check;

	i = 0;
	sign_check = 0;
	if (!av[0])
		error_generate();
	while (av[i])
	{
		if ((av[i] < '0' || av[i] > '9')
			&& (av[i] != '-' && av[i] != '+') && (av[i] != ' ')
			&& (av[i] != 34))
			error_generate();
		if (av[i] == '+' || av[i] == '-')
			sign_check++;
		if (sign_check >= 2)
			error_generate();
		i++;
	}
	i = 0;
	while (av[i] && !ft_isdigit(av[i]))
		i++;
	if ((size_t)i == ft_strlen(av))
		error_generate();
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
	i = 0;
	while (av[++i])
	{
		ft_all_is_good(av[i]);
		j = -1;
		str = ft_split(av[i], ' ');
		while (str[++j])
			ft_lstadd_back(&head, ft_lstnew(ft_int(str[j])));
		free_str(str);
	}
	if_duplcated(head);
	if_already_sort(head);
	sort_algorithm(&head, &head2);
}
