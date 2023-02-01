/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:28:30 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 12:11:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int main()
{
	char *line;
	while (1)
	{
		line = get_next_line(1);
		printf("%s", line);
		if (line == NULL)
			break;
		free(line);
	}
}