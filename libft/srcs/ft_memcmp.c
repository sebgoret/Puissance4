/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 15:32:19 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:38:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const		*src;
	unsigned char const		*dst;

	src = s1;
	dst = s2;
	if (!n)
		return (0);
	else if (*src != *dst)
		return (*src - *dst);
	else
		return (ft_memcmp((void *)++src, (void *)++dst, --n));
}
