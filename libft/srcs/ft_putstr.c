/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:40:55 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:33:18 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

int			ft_putstr(char const *s)
{
	int		len;

	if (!s)
	{
		len = 6;
		write(1, "(null)", len);
	}
	else
	{
		len = ft_strlen(s);
		write(1, s, len);
	}
	return (len);
}
