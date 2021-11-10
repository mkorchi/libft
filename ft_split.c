/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:39:10 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/10 11:49:52 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calculate_len(char const *s, char c)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	if (s[i - 1] == c)
		len--;
	if (s[0] != c)
		len++;
	return (len);
}

static char	*getstring(char const *str, int start, int end)
{
	int		i;
	char	*newstr;

	i = 0;
	if (start >= end)
		return (NULL);
	newstr = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!newstr)
		return (NULL);
	while (start + i < end)
	{
		newstr[i] = str[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static char	**process(char **strs, char const *s, char c)
{
	int		i;
	int		k;
	int		start;
	char	*str;

	i = 0;
	k = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			str = getstring(s, start, i);
			if (str != NULL && str[0] != '\0')
				strs[k++] = str;
			start = i + 1;
		}
		i++;
	}
	str = getstring(s, start, i);
	if (str != NULL && str[0] != '\0')
		strs[k++] = str;
	strs[k] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**strs;

	if (!s)
		return (NULL);
	len = calculate_len(s, c);
	strs = (char **) malloc (sizeof(char *) * (len + 1));
	if (!strs)
		return (NULL);
	strs = process(strs, s, c);
	return (strs);
}
