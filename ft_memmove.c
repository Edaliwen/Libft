/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:08:14 by avaltat           #+#    #+#             */
/*   Updated: 2021/02/09 15:10:57 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (src < dst)
		while (len != 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
