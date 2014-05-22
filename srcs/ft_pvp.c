/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pvp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:26:48 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 21:18:24 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>

void	ft_pvp(t_p4 **p, char player)
{
	int				end;
	unsigned int	i;
	t_coup			*c;

	end = 1;
	i = 0;
	ft_put_p4(*p);
	ft_putchar('\n');
	while (end)
	{
		c = ft_try_to_place(p, player);
		if (ft_play(p, player, c))
			end = 0;
		else
			player = ft_change_player(player);
		free(c);
		ft_put_p4(*p);
		i++;
	}
	ft_end_turn(i, end, player);
}
