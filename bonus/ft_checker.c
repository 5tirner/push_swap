/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:28:30 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 11:59:12 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int main()
{
	int fd = open("./GNL/get_next_line.c", O_RDONLY, 0777);
	char *line;
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break;
		free(line);
	}
}