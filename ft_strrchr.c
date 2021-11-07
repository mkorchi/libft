/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:22:18 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/03 11:57:04 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;
	int	last;

	n = 0;
	last = -1;
	while (s[n])
	{
		if (s[n] == c)
			last = n;
		n++;
	}
	if (s[n] == c)
		return ((char *) s + n);
	if (last == -1)
		return (NULL);
	else
		return ((char *) s + last);
}
