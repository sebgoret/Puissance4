/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ciradd_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:48:08 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:32:58 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			ft_ciradd_head(t_circle **begin_circle, t_circle *new)
{
	if (*begin_circle && new)
	{
		new->next = (*begin_circle)->next;
		new->prev = (*begin_circle);
		(*begin_circle)->next->prev = new;
		(*begin_circle)->next = new;
		(*begin_circle)->size += 1;
	}
}
