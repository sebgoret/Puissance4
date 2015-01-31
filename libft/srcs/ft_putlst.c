/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:34:37 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:48:05 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "list.h"

void		ft_putlst(t_list **list)
{
	t_list		*cursor;

	if (list && *list)
	{
		cursor = *list;
		while (cursor)
		{
			ft_putstr((char *)cursor->content);
			if (cursor->next)
			{
				ft_putchar(' ');
				cursor = cursor->next;
			}
			else
			{
				ft_putchar('\n');
				return ;
			}
		}
	}
}
