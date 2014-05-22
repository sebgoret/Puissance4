/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_p4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:33:05 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/08 16:25:27 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>
#include <libft.h>

char		**ft_get_map(int h, int w)
{
	char	**map;
	int		i;

	map = (char **)malloc(sizeof(*map) * (h + 1));
	if (map)
	{
		map[h] = NULL;
		i = 0;
		while (i < h)
		{
			map[i] = (char *)malloc(sizeof(*(map[i])) * (w + 1));
			if (map[i])
			{
				map[i][w] = '\0';
				ft_memset(map[i], ' ', w);
			}
			i++;
		}
	}
	return (map);
}

t_p4		*ft_create_p4(int h, int w)
{
	t_p4	*new;

	new = (t_p4 *)malloc(sizeof(*new));
	if (new)
	{
		new->h = h;
		new->w = w;
		new->map = ft_get_map(h, w);
	}
	return (new);
}
