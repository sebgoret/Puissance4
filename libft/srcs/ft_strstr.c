/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:24:09 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 18:55:17 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			len;

	if (!s2)
		return ((char *)s1);
	i = 0;
	len = (int)(ft_strlen(s1) - ft_strlen(s2));
	while (i <= len)
	{
		if (!ft_strncmp(&s1[i], s2, ft_strlen(s2)))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
