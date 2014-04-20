/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 23:48:29 by gleger            #+#    #+#             */
/*   Updated: 2014/04/20 11:33:41 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include <libft.h>

typedef struct	s_env
{
	void		*mlx;
	void		*win;
}				t_env;

typedef struct	s_dot
{
	double			x;
	double			y;
	double			z;
}				t_dot;

typedef struct	s_board
{
	int			**tab;
	int			*tab_w;
	int			h;
	t_dot		**dot;
}				t_board;

typedef struct	s_dat
{
	t_board		board;
	t_env		env;
	char		*argv;
}				t_dat;

void		draw_map(t_board board, t_env *e);
int			ft_height(char *argv);
void		ft_filled(t_board *board, int fd);
t_dot		**ft_final_tab(t_board *board);
void		print_tab(t_board board);
void		print_dot(t_board board);
int			get_color(t_dot a, t_dot b, double x);

#endif /* !FDF_H */
