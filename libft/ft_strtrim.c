/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:40:25 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/25 18:44:19 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] != ' ' && s[k] != '\n' && s[k] != '\t')
			j = k;
		k++;
	}
	if (j == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, (unsigned int)i, j - i + 1));
}

