/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:34:25 by zasabri           #+#    #+#             */
/*   Updated: 2022/10/10 21:18:59 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i]) && (str[i] == c))
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			j += 1;
		}
	}
	return (j);
}

static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**ft_free_allocation(char **s, int k)
{
	while (k >= 0)
	{
		free(s[k]);
		k--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s1, char c)
{
	char	**arr;
	int		k;
	int		j;

	k = 0;
	if (s1 == NULL)
		return (NULL);
	arr = (char **)ft_calloc((ft_count_words(s1, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s1)
	{
		while (*s1 && *s1 == c)
			s1++;
		if (*s1)
		{
			arr[k] = (char *)ft_calloc(ft_len(s1, c) + 1, sizeof(char));
			if (!arr[k++])
				return (ft_free_allocation(arr, k - 1));
			j = 0;
			while (*s1 && (*s1 != c))
				arr[k - 1][j++] = *(s1++);
		}
	}
	return (arr);
}
