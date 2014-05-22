/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/16 11:35:49 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:32:59 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

static void		ft_putnbr_rec(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int				ft_putnbr(int n)
{
	int		ret;
	int		a;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	ret = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		ret++;
		n -= n;
	}
	ft_putnbr_rec(n);
	a = 1;
	while ((n / a) > 9)
	{
		a *= 10;
		ret++;
	}
	return (ret);
}
