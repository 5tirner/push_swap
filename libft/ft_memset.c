/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:45:03 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/11 10:49:33 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	k;
	size_t			i;

	str = (unsigned char *)ptr;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = k;
		i++ ;
	}
	return (str);
}
