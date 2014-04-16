/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_dbl_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:56 by plieb             #+#    #+#             */
/*   Updated: 2014/01/08 21:46:56 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			display_list(t_data* root)
{
	t_data		*tmp;
	int			i;

	i = 0;
	tmp = root->next;
	while (tmp->index != 0)
	{
		ft_printf("List_double[%d] : %s\n", i, tmp->data);
		tmp = tmp->next;
		i++;
	}
}

t_data			*fill_list(int argc, char **argv)
{
	t_data			*root;
	t_data			*tmp;
	int				i;

	root = create_list();
	i = 0;
	tmp = root;
	while (i < argc - 1)
	{
		add_forward(tmp, argv[i + 1]);
		tmp = tmp->next;
		i++;
	}
	return (root);
}
