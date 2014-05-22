/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:12:31 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/01 17:50:03 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!(s1 && s2))
		return (NULL);
	else
	{
		join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (join)
		{
			i = 0;
			j = 0;
			while (s1[j])
				join[i++] = s1[j++];
			j = 0;
			while (s2[j])
				join[i++] = s2[j++];
			join[i] = '\0';
		}
	}
	return (join);
}
