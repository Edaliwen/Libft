/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:55:14 by avaltat           #+#    #+#             */
/*   Updated: 2021/03/15 10:26:56 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s || !(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		sub[i] = '\0';
		return (sub);
	}
	while (s[start] && i < len)
		sub[i++] = s[start++];
	if (sub[i] != '\0')
		sub[i] = '\0';
	return (sub);
}
