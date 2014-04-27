/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 23:48:29 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 12:21:24 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

static int		get_color_abab(t_dot a, t_dot b, double x_bis)
{
	if (a.z > 0 || b.z > 0)
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0xFFC300 : 0xFF7700);
	else
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0x02B1F2 : 0x0371E4);
}

static int		get_color_abba(t_dot a, t_dot b, double x_bis)
{
	if (a.z > 0 || b.z > 0)
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0xFF7700 : 0xFFC300);
	else
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0x0371E4 : 0x02B1F2);
}

static int		get_color_baba(t_dot a, t_dot b, double x_bis)
{
	if (a.z > 0 || b.z > 0)
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0xFFC300 : 0xFF7700);
	else
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0x02B1F2 : 0x0371E4);
}

static int		get_color_baab(t_dot a, t_dot b, double x_bis)
{
	if (a.z > 0 || b.z > 0)
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0xFF7700 : 0xFFC300);
	else
		return (x_bis >= ft_abs(a.x - b.x) / 2 ? 0x0371E4 : 0x02B1F2);
}

int				get_color(t_dot a, t_dot b, double x)
{
	int		x_bis;

	x_bis = (a.x < b.x) ? a.x : b.x;
	x_bis = x - x_bis;
	if (a.z == b.z && a.z == 0)
		return (0xFFFFFF);
	else if (a.z == b.z && a.z > 0)
		return (0xFF0000);
	else if (a.z == b.z && a.z < 0)
		return (0x0432D7);
	else
	{
		if (ft_abs(a.z) > ft_abs(b.z) && a.x < b.x)
			return (get_color_abab(a, b, x_bis));
		if (ft_abs(a.z) > ft_abs(b.z) && b.x < a.x)
			return (get_color_abba(a, b, x_bis));
		if (ft_abs(b.z) > ft_abs(a.z) && b.x < a.x)
			return (get_color_baba(a, b, x_bis));
		if (ft_abs(b.z) > ft_abs(a.z) && a.x < b.x)
			return (get_color_baab(a, b, x_bis));
	}
	return (0xFFFFFF);
}
