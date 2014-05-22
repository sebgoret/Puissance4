/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_coup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:45:30 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 16:18:01 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>

t_coup	*ft_create_coup(int x, int y)
{
	t_coup	*cp;

	cp = (t_coup *)malloc(sizeof(*cp));
	if (cp)
	{
		cp->x = x;
		cp->y = y;
		cp->power = 0;
	}
	return (cp);
}
