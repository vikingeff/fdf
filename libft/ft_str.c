/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:53 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 11:40:53 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strcpy(char *s1, const char *s2)
{
	unsigned long	i;

	if (s1 && s2)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = s2[i];
	}
	return (s1);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (s1)
	{
		s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
		if (s2)
		{
			ft_strcpy(s2, s1);
			return (s2);
		}
	}
	return (NULL);
}
