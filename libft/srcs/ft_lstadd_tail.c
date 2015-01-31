/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:23:38 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:39:24 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		ft_lstadd_tail(t_list **begin_list, t_list *new)
{
	t_list		*cursor;

	if (*begin_list && new)
	{
		cursor = *begin_list;
		while (cursor->next)
			cursor = cursor->next;
		cursor->next = new;
	}
}
