/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_p4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 16:25:34 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/08 16:27:27 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <p4.h>

void	ft_reset_p4(t_p4 *p)
{
	int		i;

	i = 0;
	while (i < p->h)
		ft_memset(p->map[i++], ' ', p->w);
}
