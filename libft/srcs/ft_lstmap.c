/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 18:08:25 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/21 15:23:53 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*cursor;
	t_list		*begin;

	cursor = (t_list *)malloc(sizeof(*cursor));
	if (cursor)
	{
		cursor = f(lst);
		begin = cursor;
		while (lst->next)
		{
			lst = lst->next;
			cursor->next = (t_list *)malloc(sizeof(*cursor));
			if (cursor->next == NULL)
				return (NULL);
			cursor->next = f(lst);
			cursor = cursor->next;
		}
		return (begin);
	}
	else
		return (NULL);
}
