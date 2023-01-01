/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:25:03 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/14 20:57:37 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	k;
	size_t			i;

	arr = (unsigned char *)str;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (arr[i] == k)
			return (&arr[i]);
		i++;
	}
	return (0);
}
