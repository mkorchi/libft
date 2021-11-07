/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:31:58 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/04 14:18:47 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n && str[i])
	{
		if (str[i] == (unsigned char) c)
			return (str + i);
		i++;
	}
	if (str[i] == (unsigned char) c && str[i] == '\0')
		return (str + i);
	return (NULL);
}
