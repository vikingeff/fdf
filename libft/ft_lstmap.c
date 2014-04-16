/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 20:16:05 by mlemort           #+#    #+#             */
/*   Updated: 2013/11/26 20:16:20 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*lstnew;

	lstnew = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!lstnew)
			lstnew = tmp;
		else
		{
			tmp->next = lstnew;
			lstnew = tmp;
		}
		lst = lst->next;
	}
	return (lstnew);
}
