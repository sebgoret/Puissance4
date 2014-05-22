/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_play.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:27:04 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 20:03:53 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <p4.h>

char	ft_change_player(char player)
{
	player = (player == 'R') ? 'Y' : 'R';
	return (player);
}

t_coup	*ft_try_to_place(t_p4 **p, char player)
{
	char	buf[READ_ENTRY + 1];
	int		ret;
	int		x;
	int		y;

	ft_putstr("\nPlayer ");
	ft_put_player(player);
	ft_putstr("  please enter column number");
	ft_bzero(buf, (READ_ENTRY + 1));
	ret = read(0, buf, READ_ENTRY);
	x = ft_atoi(buf);
	if (x > 0 && x <= (*p)->w && (*p)->map[0][(x - 1)] == ' ')
	{
		y = 0;
		while (y < (*p)->h && (*p)->map[y][(x - 1)] == ' ')
			y++;
		return (ft_create_coup((x - 1), (y - 1)));
	}
	else if (x <= 0 || x > (*p)->w)
		ft_putendl("\nThe column you've selected doesn't exist\n");
	else
		ft_putendl("\nThe column you've selected is full\n");
	return (ft_try_to_place(p, player));
}

int		ft_play(t_p4 **p, char player, t_coup *c)
{
	int		y;

	y = 0;
	while (y < (*p)->h && (*p)->map[y][(c->x)] == ' ')
		y++;
	c->y = (y - 1);
	(*p)->map[c->y][c->x] = player;
	if (ft_is_finished(*p, c, player))
		return (1);
	else
		return (0);
}

void	ft_end_turn(int i, int end, char player)
{
	if (!end)
	{
		ft_putstr("\nPlayer ");
		ft_put_player(player);
		ft_putstr("  has won in ");
		ft_putnbr(i);
		ft_putendl(" turns.");
	}
	else
		ft_putendl("\nDraw, you used all pieces but no one won :(.");
}
