/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:59:33 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/10 09:59:43 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

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
