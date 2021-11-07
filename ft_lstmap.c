/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:26:10 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/06 17:31:47 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mylist;
	t_list	*templist;

	if (lst == NULL)
		return (NULL);
	mylist = NULL;
	while (lst != NULL)
	{
		templist = ft_lstnew(f(lst->content));
		if (templist == NULL)
		{
			ft_lstclear(&mylist, del);
			return (NULL);
		}
		ft_lstadd_back(&mylist, templist);
		lst = lst->next;
	}
	return (mylist);
}
