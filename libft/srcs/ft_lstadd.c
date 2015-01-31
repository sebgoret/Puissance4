/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:21:12 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 18:04:42 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			ft_lstadd(t_list **begin_list, t_list *new)
{
	if (*begin_list && new)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}
