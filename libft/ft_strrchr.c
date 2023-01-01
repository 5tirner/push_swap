/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:20:30 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/10 20:37:14 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	j;

	len = 0;
	j = (char)c;
	while (str[len])
		len++;
	while (len >= 0)
	{
		if (str[len] == j)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
