/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:38:15 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:26:47 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int		ft_issigned(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int				ft_atoi(char const *nbr)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*nbr))
		nbr++;
	if (ft_issigned(*nbr))
		sign = (*nbr++ == '+') ? 1 : -1;
	while (ft_isdigit(*nbr))
		n = (n * 10) + (*nbr++ - '0');
	n *= sign;
	return (n);
}
