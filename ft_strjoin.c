/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:37:11 by mkorchi           #+#    #+#             */
/*   Updated: 2021/11/04 11:44:00 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*fstring;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	fstring = malloc(sizeof(char) * (1 + lens1 + lens2));
	if (!fstring)
		return (NULL);
	i = -1;
	while (s1[++i])
		fstring[i] = s1[i];
	j = 0;
	while (s2[j])
	{
		fstring[i] = s2[j];
		j++;
		i++;
	}
	fstring[i] = '\0';
	return (fstring);
}
