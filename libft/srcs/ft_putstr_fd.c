/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:41:38 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 16:17:03 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int			ft_putstr_fd(char const *s, int fd)
{
	int		len;

	if (!s)
	{
		len = 6;
		write(fd, "(null)", len);
	}
	else
	{
		len = ft_strlen(s);
		write(fd, s, len);
	}
	return (len);
}
