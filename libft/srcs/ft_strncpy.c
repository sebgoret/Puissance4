/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 15:57:18 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:53:05 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, char const *src, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)src;
	tmp2 = dst;
	while (n--)
	{
		if (*tmp1)
			*tmp2++ = *tmp1++;
		else
			*tmp2++ = '\0';
	}
	return (dst);
}
