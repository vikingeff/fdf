/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemort <mlemort@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 20:33:26 by mlemort           #+#    #+#             */
/*   Updated: 2013/12/01 20:44:36 by mlemort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrev(t_list *dp)
{
	t_list	*cur;
	t_list	*last;

	cur = dp;
	if (cur)
	{
		dp = dp->next;
		cur->next = NULL;
		while (dp)
		{
			last = cur;
			cur = dp;
			dp = dp->next;
			cur->next = last;
		}
	}
	return (cur);
}
