/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 17:49:39 by gleger            #+#    #+#             */
/*   Updated: 2014/04/16 17:50:20 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
