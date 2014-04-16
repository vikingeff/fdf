/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 21:06:26 by plieb             #+#    #+#             */
/*   Updated: 2013/12/13 12:59:26 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		print_tab(t_board board)
{
	int		i;
	int		j;

	j = 0;
	while (j < board.h)
	{
		i = 0;
		while (i < board.tab_w[j])
		{
			ft_putnbr(board.tab[j][i]);
			if (board.tab[j][i] < 10)
				ft_putstr("  ");
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

void		print_dot(t_board board)
{
	int		i;
	int		j;

	j = 0;
	while (j < board.h)
	{
		i = 0;
		while (i < board.tab_w[j])
		{
			ft_putstr("[");
			ft_putnbr(board.dot[j][i].x);
			ft_putstr("|");
			ft_putnbr(board.dot[j][i].y);
			ft_putstr("]  ");
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
