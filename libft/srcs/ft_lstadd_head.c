/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:21:12 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:39:11 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			ft_lstadd_head(t_list **begin_list, t_list *new)
{
	if (*begin_list && new)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}
