/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:24:40 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 14:24:46 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_len(unsigned long n)
{
	unsigned long	len;

	len = 0;
	if (n == 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned long n)
{
	char			*arr;
	unsigned long	len;

	len = ft_len(n);
	arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	if (n == 0)
		arr[0] = '0';
	while (n != 0)
	{
		--len;
		arr[len] = n % 10 + 48;
		n /= 10;
	}
	return (arr);
}
