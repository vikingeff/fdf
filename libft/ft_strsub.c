/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:55 by plieb             #+#    #+#             */
/*   Updated: 2014/01/23 21:47:22 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	dest = NULL;
	if (s && len)
	{
		dest = (char *)malloc(sizeof(char) * (len + 1));
		if (dest)
		{
			i = 0;
			while (len--)
			{
				dest[i] = s[start];
				start++;
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (dest);
}

