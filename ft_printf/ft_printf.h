/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:28:27 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/31 20:28:30 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_char(int c);
int		ft_string(char *str);
int		ft_number(int n);
char	*ft_itoa(int nb);
int		ft_unsigned(unsigned long n);
char	*ft_utoa(unsigned long n);
void	ft_putchar(char c);
int		ft_percentage(void);
int		ft_hex_ptr_len(unsigned long n);
int		ft_hex(unsigned long n, const char c);
int		ft_ptr(unsigned long n);
int		ft_check_format(va_list args, const char c);
#endif
