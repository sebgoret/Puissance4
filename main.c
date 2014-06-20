/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:02:26 by sebgoret          #+#    #+#             */
/*   Updated: 2014/06/20 19:22:46 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <p4.h>

int		ft_exit(int flag)
{
	if (flag)
	{
		ft_putendl_fd("Invalid parameter", 2);
		ft_putendl_fd("Don't exceed 18 x 21:", 2);
	}
	else
		ft_putendl_fd("Usage : ./puissance4 height width", 2);
	return (-1);
}

int		main(int ac, char **av)
{
	t_p4	*p;
	int		h;
	int		w;

	if (ac != 3)
		return (ft_exit(0));
	else
	{
		h = ft_atoi(av[1]);
		w = ft_atoi(av[2]);
		if (h < 6 || h > 18 || w < 7 || w > 21)
			return (ft_exit(1));
		p = ft_create_p4(h, w);
		ft_replay(p, 0);
		return (0);
	}
}
