/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:52 by plieb             #+#    #+#             */
/*   Updated: 2014/01/08 21:46:52 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_base(long nb, const char *base)
{
	long			result;
	long			div;
	long			size_base;
	long			i;

	i = 0;
	size_base = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		i++;
	}
	div = 1;
	while (ft_abs((nb / div)) >= size_base)
		div = div * size_base;
	while (div > 0)
	{
		result = ft_abs((nb / div) % size_base);
		ft_putchar(base[result]);
		div = div / size_base;
		i++;
	}
	return (i);
}

int		ft_putnbr_base_u(unsigned int nb, const char *base)
{
	unsigned int		result;
	unsigned int		div;
	unsigned int		size_base;
	int					i;

	i = 0;
	size_base = ft_strlen(base);
	div = 1;
	while ((nb / div) >= size_base)
		div = div * size_base;
	while (div > 0)
	{
		result = (nb / div) % size_base;
		ft_putchar(base[result]);
		div = div / size_base;
		i++;
	}
	return (i);
}

int		ft_return_nb_nb(long nb, const char *base)
{
	//long		result;
	long		div;
	long		size_base;
	long		i;

	i = 0;
	size_base = ft_strlen(base);
	div = 1;
	while ((nb / div) >= size_base)
		div = div * size_base;
	while (div > 0)
	{
	//	result = (nb / div) % size_base;
		div = div / size_base;
		i++;
	}
	return (i);
}

int		ft_return_nb_nb_di(int nb, const char *base)
{
	//int				result;
	int				div;
	int				size_base;
	int				i;

	i = 0;
	if (nb < 0)
		i++;
	nb = ft_abs(nb);
	size_base = ft_strlen(base);
	div = 1;
	while ((nb / div) >= size_base)
		div = div * size_base;
	while (div > 0)
	{
	//	result = (nb / div) % size_base;
		div = div / size_base;
		i++;
	}
	return (i);
}
