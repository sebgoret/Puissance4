/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ciradd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:56:01 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:33:11 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			ft_ciradd_tail(t_circle **begin_circle, t_circle *new)
{
	if (*begin_circle && new)
	{
		new->next = (*begin_circle);
		new->prev = (*begin_circle)->prev;
		(*begin_circle)->prev->next = new;
		(*begin_circle)->prev = new;
		(*begin_circle)->size += 1;
	}
}
