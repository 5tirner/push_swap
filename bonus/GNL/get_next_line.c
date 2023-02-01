/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:38:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 11:35:25 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char	*buffer_to_stock(int fd, char *stock)
{
	char	*buff;
	int		i;

	buff = malloc((BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strch(stock, '\n') && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			if (!stock)
				return (NULL);
			return (stock);
		}
		buff[i] = '\0';
		stock = ft_strjoi(stock, buff);
	}
	free(buff);
	return (stock);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stock;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stock = buffer_to_stock(fd, stock);
	if (!stock)
		return (NULL);
	line = ft_pre_save(stock);
	stock = ft_sec_save(stock);
	return (line);
}
