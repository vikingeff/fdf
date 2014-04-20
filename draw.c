/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 23:48:29 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 11:33:29 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static double		get_coeff(t_dot a, t_dot b)
{
	return ((b.y - a.y) / (b.x - a.x));
}

static double		get_ordinate_origin(t_dot a, t_dot b)
{
	return (a.y - ((b.y - a.y) / (b.x - a.x)) * a.x);
}

static void			draw_line(t_dot a, t_dot b, t_env *e)
{
	double		coeff;
	double		origin;
	double		x;
	double		y;

	if (a.x != b.x)
	{
		coeff = get_coeff(a, b);
		origin = get_ordinate_origin(a, b);
		x = (a.x < b.x) ? (a.x) : (b.x);
		while (x <= a.x || x <= b.x)
		{
			y = coeff * x + origin;
			mlx_pixel_put(e->mlx, e->win, x, y, get_color(a, b, x));
			x++;
		}
	}
	else
	{
		y = (a.y < b.y) ? (a.y) : (b.y);
		while (y <= a.y || y <= b.y)
			mlx_pixel_put(e->mlx, e->win, a.x, y++, get_color(a, b, 0));
	}
}

void				draw_map(t_board board, t_env *e)
{
	int		x;
	int		y;

	y = 0;
	while (y < board.h)
	{
		x = 0;
		while (x < board.tab_w[y])
		{
			if (x != 0)
				draw_line(board.dot[y][x - 1], board.dot[y][x], e);
			if (y != 0)
			{
				if (x < board.tab_w[y - 1])
					draw_line(board.dot[y - 1][x], board.dot[y][x], e);
			}
			x++;
		}
		y++;
	}
}
