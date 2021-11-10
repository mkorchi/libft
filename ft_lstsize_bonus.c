/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:57:14 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/10 10:22:57 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*templst;

	i = 0;
	templst = lst;
	while (templst)
	{
		templst = templst->next;
		i++;
	}
	return (i);
}
