/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 11:54:33 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 21:01:17 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <p4.h>

int		ft_ask_to_play(void)
{
	char	buf[READ_ENTRY + 1];
	int		ret;

	ft_putstr("Do you want to play against human or IA?(h, i)");
	ft_bzero(buf, (READ_ENTRY + 1));
	ret = read(0, buf, READ_ENTRY);
	if (ft_strcmp(buf, "h\n") && ft_strcmp(buf, "i\n"))
	{
		ft_putendl("\nbad entry, try again\n");
		return (ft_ask_to_play());
	}
	else if (ft_strequ(buf, "h\n"))
		return (1);
	else
		return (0);
}

void	ft_start_game(t_p4 *p)
{
	char	player;
	int		flag;

	player = ft_random_player();
	flag = ft_ask_to_play();
	if (flag)
		ft_pvp(&p, player);
	else
		ft_IA(&p, player);
	ft_replay(p, 1);
}

void	ft_replay(t_p4 *p, int flag)
{
	char	buf[READ_ENTRY + 1];
	int		ret;

	if (flag)
	{
		ft_putstr("Do you want to replay?(yes, no)");
		ft_bzero(buf, (READ_ENTRY + 1));
		ret = read(0, buf, READ_ENTRY);
		if (ft_strequ(buf, "yes\n"))
		{
			ft_reset_p4(p);
			ft_start_game(p);
		}
		else if (ft_strequ(buf, "no\n"))
			ft_destroy_p4(p);
		else
			ft_replay(p, 1);
	}
	else
		ft_start_game(p);
}
