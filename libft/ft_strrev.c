/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 11:00:31 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/27 11:06:45 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i <= len / 2)
		{
			tmp = str[i];
			str[i] = str[len - i];
			str[len - i] = tmp;
			i++;
		}
	}
	return (str);
}

