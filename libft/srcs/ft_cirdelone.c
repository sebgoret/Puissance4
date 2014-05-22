/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 05:01:25 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 06:46:41 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <list.h>

void			ft_cirdelone(t_circle **begin_circle, t_circle *del)
{
	t_circle	*cursor;

	if (*begin_circle && del)
	{
		cursor = (*begin_circle)->next;
		if ((cursor == del) && (cursor == *begin_circle))
		{
			free(*begin_circle);
			*begin_circle = NULL;
			return ;
		}
		while ((cursor != del) && (cursor != *begin_circle))
			cursor = cursor->next;
		if (cursor == *begin_circle)
			return ;
		else
		{
			cursor->prev->next = cursor->next;
			cursor->next->prev = cursor->prev;
			free(cursor->content);
			free(cursor);
			(*begin_circle)->size -= 1;
		}
	}
}
