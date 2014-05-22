/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:38:58 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 06:42:24 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list.h>

void			ft_lstdel(t_list **begin_list)
{
	t_list		*cursor;

	if (*begin_list)
	{
		cursor = *begin_list;
		while (cursor->next)
			cursor = cursor->next;
		ft_lstdelone(begin_list, cursor);
		ft_lstdel(begin_list);
	}
}
