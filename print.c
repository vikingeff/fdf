/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 23:48:29 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 12:22:03 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

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
