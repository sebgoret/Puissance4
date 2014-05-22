/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_IA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 11:53:59 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 21:18:15 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>

void	ft_IA(t_p4 **p, char player)
{
	char			ia;
	int				end;
	unsigned int	i;
	t_coup			*c;

	ia = ft_random_player();
	end = 1;
	i = 0;
	ft_put_p4(*p);
	ft_putchar('\n');
	while (end)
	{
		if (player == ia)
			c = ft_try_to_place(p, player);
		else
			c = ft_test_IA(*p, 'Y');
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
