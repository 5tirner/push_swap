/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:54:33 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/10 20:28:31 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	first_set(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i] && (ft_search(set, str[i]) == 1))
		i++;
	return (i);
}

static size_t	last_set(char const *str, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str) - 1;
	i = 0;
	while (len > 0 && (ft_search(set, str[len]) == 1))
	{
		len--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	size_t	start;
	size_t	last;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = first_set(s1, set);
	last = last_set(s1, set);
	if (start == ft_strlen(s1))
		return (ft_strdup("\0"));
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) - (start + last)) + 1));
	if (!str)
		return (NULL);
	while (s1[i] && ft_strlen(s1) > (start + last))
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
