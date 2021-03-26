/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:32:48 by avaltat           #+#    #+#             */
/*   Updated: 2021/03/15 10:12:48 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long n)
{
	int		size;

	size = (n <= 0) ? 1 : 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char		*res;
	int			len;
	long int	nb;

	nb = (long int)n;
	len = get_size(nb);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = '0';
	else if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (len-- && nb)
	{
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
