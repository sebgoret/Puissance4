/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 05:14:26 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:33:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			ft_cirdel(t_circle **begin_circle)
{
	if (*begin_circle)
	{
		ft_cirdelone(begin_circle, (*begin_circle)->prev);
		ft_cirdel(begin_circle);
	}
}
