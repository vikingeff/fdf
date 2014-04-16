/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkorimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 11:31:26 by rkorimba          #+#    #+#             */
/*   Updated: 2013/12/15 14:58:17 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_width(char *line)
{
	int			is_number;
	int			width;

	width = 0;
	is_number = 0;
	while (*line)
	{
		if (is_number == 0 && ft_isdigit(*line))
		{
			is_number = 1;
			width++;
		}
		else if (is_number == 1 && !ft_isdigit(*line))
			is_number = 0;
		line++;
	}
	return (width);
}

int				ft_height(char *argv)
{
	int			height;
	int			fd;
	char		*line;

	height = 0;
	line = NULL;
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		exit(1);
	while (get_next_line(fd, &line) > 0)
		height++;
	free(line);
	close(fd);
	return (height);
}

static int		*ft_filled_line(char *line, int *tab)
{
	int		i;

	i = 0;
	while (*line)
	{
		if (ft_isdigit(*line) || (*line == '-' && ft_isdigit(*(line + 1))))
		{
			tab[i] = ft_atoi(line);
			i++;
			while (*line == '-' || ft_isdigit(*line))
				line++;
		}
		else
			line++;
	}
	return (tab);
}

void			ft_filled(t_board *board, int fd)
{
	int			j;
	char		*line;

	j = 0;
	line = NULL;
	board->tab = (int**)malloc(sizeof(int*) * board->h);
	board->tab_w = (int*)malloc(sizeof(int) * board->h);
	while (get_next_line(fd, &line) > 0)
	{
		board->tab_w[j] = ft_width(line);
		board->tab[j] = (int*)malloc(sizeof(int) * (board->tab_w[j]));
		board->tab[j] = ft_filled_line(line, board->tab[j]);
		j++;
	}
	free(line);
}
