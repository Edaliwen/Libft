/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:31:40 by avaltat           #+#    #+#             */
/*   Updated: 2021/01/29 12:05:19 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t destsize;
	size_t srcsize;

	destsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (destsize > dstsize)
		destsize = dstsize;
	if (destsize == dstsize)
		return (dstsize + srcsize);
	i = destsize;
	while (*src && i < (dstsize - 1))
		dst[i++] = *(src++);
	if (dstsize != 0)
		dst[i] = '\0';
	return (destsize + srcsize);
}
