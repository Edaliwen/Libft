/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:32:55 by avaltat           #+#    #+#             */
/*   Updated: 2021/03/15 11:59:50 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	strings;

	i = 0;
	strings = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			strings++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (strings);
}

static char	**free_mem(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		res[i] = NULL;
	}
	free(res);
	res = NULL;
	return (NULL);
}

static int	string_len(const char *s, char c, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start + len] != c && s[start + len] != '\0')
		len++;
	return (len);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(char*) * (count_strings(s, c) + 1))))
		return (NULL);
	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!(res[start] = ft_substr(s, i, string_len(s, c, i))))
				return (free_mem(res));
			i = i + string_len(s, c, i);
			start++;
		}
		else
			i++;
	}
	res[start] = NULL;
	return (res);
}
