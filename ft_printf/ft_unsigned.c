/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:42:18 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 14:42:20 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned long n)
{
	int		len;
	char	*arr;

	len = 0;
	arr = ft_utoa(n);
	len += ft_string(arr);
	free(arr);
	return (len);
}
