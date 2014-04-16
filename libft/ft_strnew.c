/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:55 by plieb             #+#    #+#             */
/*   Updated: 2014/01/23 21:47:14 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str)
	{
		i = 0;
		while (i <= size)
			str[i++] = '\0';
	}
	return (str);
}
