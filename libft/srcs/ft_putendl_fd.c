/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:42:04 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:33:46 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

int			ft_putendl_fd(char const *s, int fd)
{
	int		len;

	if (!s)
	{
		len = 7;
		write(fd, "(null)\n", len);
	}
	else
	{
		len = ft_strlen(s);
		write(fd, s, len);
		write(fd, "\n", 1);
		len++;
	}
	return (len);
}
