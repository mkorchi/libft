/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:08:02 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/08 14:48:37 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	if (dstsize < dstlen + 1)
	{
		return (dstsize + ft_strlen(src));
	}
	if (dstsize > dstlen + 1)
	{
		j = 0;
		while (j < dstsize - dstlen - 1 && src[j])
		{
			dst[dstlen + j] = src[j];
			j++;
		}
		dst[dstlen + j] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
