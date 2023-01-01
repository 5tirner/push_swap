/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:26:37 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/10 20:31:55 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (str[i])
	{
		if (str[i] == k)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == k)
		return ((char *)&str[i]);
	return (0);
}
