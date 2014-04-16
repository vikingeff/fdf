/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:51 by plieb             #+#    #+#             */
/*   Updated: 2014/01/09 04:18:06 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	if (s)
	{
		str = (unsigned char *)s;
		while (n--)
		{
			if (*str == (unsigned char)c)
				return ((void *)str);
			str++;
		}
	}
	return (NULL);
}
