/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:54 by plieb             #+#    #+#             */
/*   Updated: 2014/01/23 21:47:02 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = NULL;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str)
		{
			i = 0;
			while (s[i] != '\0')
			{
				str[i] = f(i, s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
