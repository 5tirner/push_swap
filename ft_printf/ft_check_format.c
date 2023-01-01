/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:57:07 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 11:57:17 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_char(va_arg(args, int));
	else if (c == 's')
		len += ft_string(va_arg(args, char *));
	else if (c == 'p')
		len += ft_ptr(va_arg(args, unsigned long ));
	else if (c == 'd' || c == 'i')
		len += ft_number(va_arg(args, int));
	else if (c == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		len += ft_percentage();
	return (len);
}
