/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:37:56 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:47:52 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "list.h"

void		ft_putcir(t_circle **circle)
{
	t_circle	*cursor;

	if (circle && *circle)
	{
		cursor = (*circle)->next;
		while (cursor != (*circle))
		{
			ft_putstr((char *)cursor->content);
			if (cursor->next != (*circle))
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
