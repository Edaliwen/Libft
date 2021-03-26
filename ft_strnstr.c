/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:25:57 by avaltat           #+#    #+#             */
/*   Updated: 2021/02/01 12:10:16 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len2;

	len2 = ft_strlen(needle);
	if (len2 == 0)
		return ((char*)haystack);
	while (*haystack != '\0' && len-- >= len2)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len2) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
