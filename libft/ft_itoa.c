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

#include "libft.h"

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb *= -1);
	return (nb);
}

int	nbr_len(int nb)
{
	int	l;

	l = 0;
	if (nb <= 0)
		l += 1;
	while (nb != 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		l;

	l = nbr_len(nb);
	str = malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);
	str[l] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		str[0] = '-';
	while (nb != 0)
	{
		--l;
		str[l] = ft_abs(nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
