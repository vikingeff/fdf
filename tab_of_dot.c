/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_of_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkorimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:24:34 by rkorimba          #+#    #+#             */
/*   Updated: 2013/12/15 14:58:28 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_dot	**ft_final_tab(t_board *board)
{
	int			i;
	int			j;
	double		z;
	double		cte;

	j = 0;
	cte = 1.5;
	board->dot = (t_dot **)malloc(sizeof(t_dot *) * board->h);
	while (j < board->h)
	{
		i = 0;
		board->dot[j] = (t_dot *)malloc(sizeof(t_dot) * board->tab_w[j]);
		while (i < board->tab_w[j])
		{
			board->dot[j][i].z = board->tab[j][i];
			z = board->dot[j][i].z;
			board->dot[j][i].x = (i * 42) + cte * (-1 * z) + 50;
			board->dot[j][i].y = (j * 42) + (cte / 2) * (-1 * z) + 50;
			i++;
		}
		j++;
	}
	return (board->dot);
}
