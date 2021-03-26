/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaltat <avaltat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:06:46 by avaltat           #+#    #+#             */
/*   Updated: 2021/03/18 14:23:59 by avaltat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*elem;
	void	*c;

	new = NULL;
	while (lst)
	{
		c = f(lst->content);
		if (!(elem = ft_lstnew(c)))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
