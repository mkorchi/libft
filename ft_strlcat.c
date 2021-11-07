/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:08:02 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/06 14:22:36 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nstrlen(const char	*src)
{
	size_t	size;

	if (src == NULL)
		return (0);
	size = 0;
	while (src[size])
		size++;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	j;
	int		n;

	dstlen = ft_nstrlen(dst);
	n = dstsize - dstlen - 1;
	if (n < 0)
		return (dstsize + ft_strlen(src));
	j = 0;
	while ((int) j < n && src[j])
	{
		dst[dstlen + j] = src[j];
		j++;
	}
	dst[dstlen + j] = '\0';
	return (dstlen + ft_strlen(src));
}
