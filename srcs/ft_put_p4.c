/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:49:59 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 18:26:58 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <p4.h>
#include <libft.h>

void		ft_print_dim(t_p4 *p)
{
	ft_putendl("PUISSANCE 4:");
	ft_putstr("hauteur : ");
	ft_putnbr(p->h);
	ft_putstr(", largeur : ");
	ft_putnbr(p->w);
	ft_putendl("\n");
}

void		ft_put_nbr(int w)
{
	int		i;

	i = 1;
	ft_putchar('|');
	while (i <= w)
	{
		if (!(i / 100) && (i != 100))
			ft_putchar('0');
		if (!(i / 10) && (i != 10))
			ft_putchar('0');
		ft_putnbr(i);
		if (i++ == w)
			ft_putendl("|");
		else
			ft_putchar('|');
	}
}

void		ft_put_p4(t_p4 *p)
{
	int		i;
	int		j;

	if (!p)
		return ;
	ft_print_dim(p);
	i = 0;
	while (i < p->h)
	{
		j = 0;
		ft_putstr("| ");
		while (j < p->w)
		{
			if (p->map[i][j] == ' ')
				ft_putchar(p->map[i][j]);
			else
				ft_put_player(p->map[i][j]);
			j++;
			if (j == p->w)
				ft_putstr(" |\n");
			else
				ft_putstr(" | ");
		}
		i++;
	}
	ft_put_nbr(p->w);
}
