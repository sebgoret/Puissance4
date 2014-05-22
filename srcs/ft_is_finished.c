/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_finished.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 07:08:56 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 20:02:20 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <p4.h>

int		ft_how_in_line(t_p4 *p, t_coup *c, char player)
{
	int		nb;
	int		i;

	nb = 1;
	i = 1;
	while (((c->x - i) >= 0) && (p->map[c->y][c->x - i] == player))
		i++;
	nb += (i - 1);
	i = 1;
	while (((c->x - i) < p->w) && (p->map[c->y][c->x + i] == player))
		i++;
	nb += (i - 1);
	return (nb);
}

int		ft_how_in_column(t_p4 *p, t_coup *c, char player)
{
	int		nb;
	int		i;

	nb = 1;
	i = 1;
	while (((c->y - i) >= 0) && (p->map[c->y -i][c->x] == player))
		i++;
	nb += (i - 1);
	i = 1;
	while (((c->y + i) < p->h) && (p->map[c->y + i][c->x] == player))
		i++;
	nb += (i - 1);
	return (nb);
}

int		ft_how_in_diag1(t_p4 *p, t_coup *c, char player)
{
	int		nb;
	int		i;

	nb = 1;
	i = 1;
	while (((c->y - i) >= 0) && ((c->x - i) >= 0) && D1)
		i++;
	nb += (i - 1);
	i = 1;
	while (((c->y + i) < p->h) && ((c->x + i) < p->w) && D2)
		i++;
	nb += (i - 1);
	return (nb);
}

int		ft_how_in_diag2(t_p4 *p, t_coup *c, char player)
{
	int		nb;
	int		i;

	nb = 1;
	i = 1;
	while (((c->y + i) < p->h) && ((c->x - i) >= 0) && D3)
		i++;
	nb += (i - 1);
	i = 1;
	while (((c->y - i) >= 0) && ((c->x + i) < p->w) && D4)
		i++;
	nb += (i - 1);
	return (nb);
}


int		ft_is_finished(t_p4 *p, t_coup *c, char player)
{
	int		i;
	int		(*f[4])(t_p4 *, t_coup *, char);

	f[0] = ft_how_in_line;
	f[1] = ft_how_in_column;
	f[2] = ft_how_in_diag1;
	f[3] = ft_how_in_diag2;
	i = 0;
	while (i < 4)
		if (f[i++](p, c, player) >= 4)
			return (1);
	return (0);
}
