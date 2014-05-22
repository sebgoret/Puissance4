/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_IA.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 18:54:52 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 20:58:12 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>

int			ft_try_to_win(t_p4 *p, char color)
{
	t_p4	*tmp;
	t_coup	*cp;
	int		i;

	i = 0;
	while (i < p->w)
	{
		if (i >= 0 && i < p->w && p->map[0][i] == ' ')
		{
			tmp = ft_copy_p4(p);
			cp = ft_create_coup(i, 0);
			if (ft_play(&tmp, color, cp))
			{
				ft_destroy_p4(tmp);
				free(cp);
				return (i);
			}
			ft_destroy_p4(tmp);
			free(cp);
		}
		i++;
	}
	return (-1);
}

int			ft_try_to_survive(t_p4 *p, char color)
{
	color = ft_change_player(color);
	return (ft_try_to_win(p, color));
}

t_coup		*ft_generate_win(t_p4 *p, int c)
{
	t_coup	*cp;
	int		y;

	y = 0;
	while (y < p->h && p->map[y][c] == ' ')
		y++;
	cp = ft_create_coup(c, (y -1));
	return (cp);
}

t_coup		*ft_test_IA(t_p4 *p, char color)
{
	int		rd;
	int		y;
	int		c;

	rd = ft_random(p->w);
	if ((c = ft_try_to_win(p, color)) >= 0)
		return (ft_generate_win(p, c));
	if ((c = ft_try_to_survive(p, color)) >= 0)
		return (ft_generate_win(p, c));
	if (rd >= 0 && rd < p->w && p->map[0][rd] == ' ')
	{
		y = 0;
		while (y < p->h && p->map[y][rd] == ' ')
			y++;
		return (ft_create_coup(rd, (y - 1)));
	}
	else
		return (ft_test_IA(p, color));
}
