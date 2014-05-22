/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:19:37 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:39:35 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrchr(char const *s, int c)
{
	size_t		len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[len]);
	while (len--)
		if (s[len] == c)
			return ((char *)&s[len]);
	return (NULL);
}
