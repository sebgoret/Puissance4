/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 15:25:19 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:29:59 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char const		*s2;

	s2 = s;
	if (s2)
		while (n--)
		{
			if (*s2 == (unsigned char)c)
				return ((void *)s2);
			s2++;
		}
	return (NULL);
}
