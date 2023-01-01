/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:37:45 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/11 10:56:04 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (arr1[i] > arr2[i])
			return (arr1[i] - arr2[i]);
		else if (arr1[i] < arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
