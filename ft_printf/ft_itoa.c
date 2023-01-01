/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:05:06 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/11 11:00:39 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}

static int	nbr_len(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
		l += 1;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		l;

	l = nbr_len(n);
	arr = malloc(sizeof(char) * l + 1);
	if (!arr)
		return (NULL);
	arr[l] = '\0';
	if (n == 0)
		arr[0] = '0';
	if (n < 0)
		arr[0] = '-';
	while (n != 0)
	{
		--l;
		arr[l] = ft_abs(n % 10) + 48;
		n /= 10;
	}
	return (arr);
}
