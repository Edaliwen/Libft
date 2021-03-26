/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:38:47 by avaltat           #+#    #+#             */
/*   Updated: 2021/02/01 11:36:19 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;

	if (!(ptr = malloc(count * size)))
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
