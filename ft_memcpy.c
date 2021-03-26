/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:28:02 by avaltat           #+#    #+#             */
/*   Updated: 2021/02/02 09:52:36 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char *source;

	dest = (unsigned char*)dst;
	source = (const unsigned char*)src;
	if ((n == 0) || dst == src)
		return (dst);
	while (n != 0)
	{
		*(dest++) = *(source++);
		n--;
	}
	return (dst);
}
