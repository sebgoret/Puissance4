/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_p4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:46:14 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/08 12:49:43 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <p4.h>
#include <libft.h>

void		ft_destroy_tab(char **tab)
{
	int		i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
		ft_strdel(&(tab[i++]));
	free(tab);
	tab = NULL;
}

void		ft_destroy_p4(t_p4 *p)
{
	if (!p)
		return ;
	ft_destroy_tab(p->map);
	free(p);
	p = NULL;
}
