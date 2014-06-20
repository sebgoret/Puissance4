/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 16:16:46 by sebgoret          #+#    #+#             */
/*   Updated: 2014/06/20 19:15:42 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void		ft_destroy_split(char **split)
{
	int		i;

	i = 0;
	if (split)
	{
		while (split[i])
			ft_strdel(&split[i++]);
		free(split);
		split = NULL;
	}
}
