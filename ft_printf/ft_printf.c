/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:16:26 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 14:16:34 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg_ptr;
	int		len;

	i = 0;
	len = 0;
	va_start(arg_ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check_format(arg_ptr, str[i + 1]);
			i++;
		}
		else
			len += ft_char(str[i]);
		if (str[i] == '\0')
			return (len);
		i++;
	}
	va_end(arg_ptr);
	return (len);
}
