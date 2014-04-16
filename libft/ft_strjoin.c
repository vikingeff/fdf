/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:54 by plieb             #+#    #+#             */
/*   Updated: 2014/01/23 21:46:47 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	size_t	i;

	dest = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		dest = (char *)malloc(sizeof(char) * (len + 1));
		if (dest)
		{
			i = 0;
			while (*s1)
				dest[i++] = *s1++;
			while (*s2)
				dest[i++] = *s2++;
			dest[i] = '\0';
		}
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (dest);
}
