/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pf_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:52 by plieb             #+#    #+#             */
/*   Updated: 2014/01/08 21:46:52 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putZ_pf(va_list ap, int nbb)
{
	int		i;

	i = 0;
	ap = ap + 0;
	while (i < nbb - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('Z');
	return (i + 1);
}

int		ft_puthexa_min_pf(va_list ap, int nbb)
{
	int		nb;
	int		nb2;
	int		i;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "0123456789abcdef");
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	return (ft_putnbr_base_u(nb, "0123456789abcdef") + i);
}

int		ft_puthexa_max_pf(va_list ap, int nbb)
{
	int		nb;
	int		nb2;
	int		i;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "0123456789ABCDEF");
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	return (ft_putnbr_base_u(nb, "0123456789ABCDEF") + i);
}

int		ft_puthexa_pf(va_list ap, int nbb)
{
	void		*nb;
	int			i;
	//int			i_bis;
	int			nb2;

	//i_bis = 0;
	i = 0;
	nb = va_arg(ap, void*);
	nb2 = ft_return_nb_nb((long)nb, "0123456789abcdef") + 2;
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putstr("0x");
	return (ft_putnbr_base((long)nb, "0123456789abcdef") + i + 2);
}
