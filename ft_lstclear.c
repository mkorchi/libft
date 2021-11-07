/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:57:11 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/06 17:30:50 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mylist;
	t_list	*next;

	if (lst == NULL && del == NULL)
		return ;
	mylist = *lst;
	while (mylist)
	{
		next = mylist->next;
		del(mylist->content);
		free(mylist);
		mylist = next;
	}
	*lst = NULL;
}
