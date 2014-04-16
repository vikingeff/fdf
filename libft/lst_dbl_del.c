/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_dbl_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plieb <plieb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:46:56 by plieb             #+#    #+#             */
/*   Updated: 2014/01/09 04:21:30 by plieb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void			del_elem(t_data *elem)
{
	elem->prev->next = elem->next;
	elem->next->prev = elem->prev;
	free(elem);
}

void			del_first_elem(t_data *root)
{
	if (root->next != root)
		del_elem(root->next);
}

void			del_last_elem(t_data *root)
{
	if (root->prev != root)
		del_elem(root->prev);
}

void			empty_list(t_data *root)
{
	t_data		*tmp;
	t_data		*next;

	tmp = root->next;
	while (tmp != root)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}

void			del_list(t_data **root)
{
	empty_list(*root);
	free(*root);
	*root = NULL;
}
