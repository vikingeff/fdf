/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:05:24 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/22 17:18:16 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;

	ch = NULL;
	if (s)
	{
		while (*s)
		{
			if (*s == c)
				ch = (char *)s;
			s++;
		}
		if (*s == c)
			ch = (char *)s;
	}
	return (ch);
}
