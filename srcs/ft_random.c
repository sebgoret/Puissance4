/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 20:54:49 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 21:01:50 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_random(int w)
{
	int		rd;

	rd = rand();
	return (rd % (w + 1));
}

char		ft_random_player(void)
{
	if (ft_random(1))
		return ('R');
	else
		return ('Y');
}
