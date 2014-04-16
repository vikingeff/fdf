/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:47:00 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/22 21:57:00 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2 && n)
	{
		while (n != 0)
		{
			if (*s1 != *s2)
			{
				if (*(unsigned char *)s1 > *(unsigned char *)s2)
					return (1);
				else
					return (-1);
			}
			if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
			n--;
		}
	}
	return (0);
}

