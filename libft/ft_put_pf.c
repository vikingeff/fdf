/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:52 by plieb             #+#    #+#             */
/*   Updated: 2014/01/08 21:46:52 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_pf(va_list ap, int nbb)
{
	int		nb;
	int		nb2;
	int		i;

	i = 0;
	nb = va_arg(ap, int);
	nb2 = ft_return_nb_nb_di(nb, "0123456789");
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	return (ft_putnbr_base(nb, "0123456789") + i);
}

int		ft_putnbr_u_pf(va_list ap, int nbb)
{
	int		nb;
	int		nb2;
	int		i;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "0123456789");
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	return (ft_putnbr_base_u(nb, "0123456789") + i);
}

int		ft_putchar_pf(va_list ap, int nbb)
{
	int		i;
	char	c;

	i = 0;
	c = va_arg(ap, int);
	while (i < nbb - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar(c);
	return (i + 1);
}

int		ft_putstr_pf(va_list ap, int nbb)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(ap, char *);
	while (i < nbb - (int)ft_strlen(s))
	{
		ft_putchar(' ');
		i++;
	}
	if (s)
	{
		ft_putstr(s);
		return (ft_strlen(s) + i);
	}
	else
	{
		ft_putstr("(null)");
		return (6 + i);
	}
}

int		ft_putoctal_pf(va_list ap, int nbb)
{
	unsigned int		nb;
	int					nb2;
	int					i;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "01234567");
	while (i < nbb - nb2)
	{
		ft_putchar(' ');
		i++;
	}
	return (ft_putnbr_base_u(nb, "01234567") + i);
}
