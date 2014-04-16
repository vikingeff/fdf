/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:31:22 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/22 13:06:12 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (s1 && s2)
	{
		str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
		while (n--)
			*str1++ = *str2++;
	}
	return (s1);
}

