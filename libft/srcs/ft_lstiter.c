/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 18:06:22 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/21 13:48:58 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void					ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*cursor;

	cursor = lst;
	while (cursor)
	{
		f(cursor);
		cursor = cursor->next;
	}
}
