/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 22:19:16 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/25 17:59:29 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (ft_tolower((int)*s1) == ft_tolower((int)*s2))
		{
			if (*s1 == '\0')
				return (1);
			s1++;
			s2++;
		}
	}
	return (0);
}