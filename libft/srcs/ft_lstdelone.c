/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:27:16 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 06:42:51 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <list.h>

static void		ft_destroy_list(t_list *del)
{
	del->next = NULL;
	free(del->content);
	free(del);
	del = NULL;
}

void			ft_lstdelone(t_list **begin_list, t_list *del)
{
	t_list		*cursor;

	if (*begin_list && del)
	{
		cursor = *begin_list;
		if (del == cursor)
		{
			if (cursor->next)
				*begin_list = cursor->next;
			else
				*begin_list = NULL;
			ft_destroy_list(del);
		}
		while (cursor->next && cursor->next != del)
			cursor = cursor->next;
		if (cursor->next == del)
		{
			cursor->next = cursor->next->next;
			ft_destroy_list(del);
		}
	}
}
