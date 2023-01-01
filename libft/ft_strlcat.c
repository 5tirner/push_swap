/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:30:51 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/10 20:54:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l_dest;
	size_t	l_src;

	l_src = ft_strlen(src);
	if (dstsize == 0)
		return (l_src);
	l_dest = ft_strlen(dst);
	if (dstsize <= l_dest)
		return (l_src + dstsize);
	i = l_dest;
	j = 0;
	while (src[j] && j < dstsize - l_dest - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (l_dest + l_src);
}
