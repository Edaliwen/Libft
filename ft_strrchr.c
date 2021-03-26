/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:44:29 by avaltat           #+#    #+#             */
/*   Updated: 2021/02/03 10:30:20 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	if (!(char)c)
		return ((char*)s + len);
	while (len--)
	{
		if (s[len] == ((char)c))
			return ((char*)s + len);
	}
	return (NULL);
}
