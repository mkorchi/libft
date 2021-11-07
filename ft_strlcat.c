/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:08:02 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/07 20:18:55 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	j;
	int		n;

	dstlen = ft_strlen(dst);
	n = dstsize - dstlen - 1;
	if (n < 0)
		return (dstsize + ft_strlen(src));
	if (n > 0)
	{
		j = 0;
		while ((int) j < n && src[j])
		{
			dst[dstlen + j] = src[j];
			j++;
		}
		dst[dstlen + j] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
