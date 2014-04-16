/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 13:00:41 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/24 13:40:21 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*new;
	size_t			i;

	new = NULL;
	new = (unsigned char *)malloc(size);
	if (new)
	{
		i = 0;
		while (size--)
			new[i++] = 0;
	}
	return ((void *)new);
}

