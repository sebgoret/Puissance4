/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:42:23 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 16:16:28 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void		ft_putnbr_rec(int n, int fd)
{
	if (n < 10)
		ft_putchar_fd((n + '0'), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}

int				ft_putnbr_fd(int n, int fd)
{
	int		ret;
	int		a;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	ret = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		ret++;
		n = -n;
	}
	ft_putnbr_rec(n, fd);
	a = 1;
	while ((n / a) > 9)
	{
		a *= 10;
		ret++;
	}
	return (ret);
}
