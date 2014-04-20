/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 23:48:29 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 11:33:35 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65307)
	{
		mlx_destroy_window(e->mlx, e->win);
		exit(0);
	}
	return (0);
}

static void		loading(t_dat *data)
{
	int		fd;

	data->board.h = ft_height(data->argv);
	fd = open(data->argv, O_RDONLY);
	if (fd < 0)
		exit(1);
	ft_filled(&data->board, fd);
	close(fd);
	data->board.dot = ft_final_tab(&data->board);
}

static int		expose_hook(t_dat *data)
{
	draw_map(data->board, &(data->env));
	return (0);
}

int				main(int argc, char **argv)
{
	t_dat		data;

	if (argc > 1)
	{
		data.argv = argv[1];
		data.env.mlx = mlx_init();
		if (!data.env.mlx)
			return (1);
		data.env.win = mlx_new_window(data.env.mlx, 1420, 980, argv[1]);
		if (!data.env.win)
			return (1);
		loading(&data);
		mlx_expose_hook(data.env.win, expose_hook, &data);
		mlx_key_hook(data.env.win, key_hook, &(data.env));
		mlx_loop(data.env.mlx);
	}
	return (0);
}
