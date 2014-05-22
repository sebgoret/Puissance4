/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:41:51 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:33:38 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

int			ft_putendl(char const *s)
{
	int		len;

	if (!s)
	{
		len = 7;
		write(1, "(null)\n", len);
	}
	else
	{
		len = ft_strlen(s);
		write(1, s, len);
		write(1, "\n", 1);
		len++;
	}
	return (len);
}
