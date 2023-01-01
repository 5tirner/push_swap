/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:53 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 11:39:57 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number(int n)
{
	int		len;
	char	*arr;

	len = 0;
	arr = ft_itoa(n);
	len = ft_string(arr);
	free(arr);
	return (len);
}
