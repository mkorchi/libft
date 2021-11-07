/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:19:07 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/06 17:31:15 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*mylist;

	if (lst == NULL || f == NULL)
		return ;
	mylist = lst;
	while (mylist)
	{
		f(mylist->content);
		mylist = mylist->next;
	}
}
