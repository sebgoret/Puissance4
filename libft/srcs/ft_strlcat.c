/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:07:56 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:51:35 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len;

	len = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (size < len)
		return (size + ft_strlen(src));
	else
	{
		while (i < (size - 1) && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (ft_strlen(src) + len);
	}
}
