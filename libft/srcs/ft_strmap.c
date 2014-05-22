/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:54:34 by sebgoret          #+#    #+#             */
/*   Updated: 2014/01/15 19:58:08 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	char	*tmp;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new)
		{
			tmp = new;
			while (*s)
				*tmp++ = f(*s++);
		}
		return (new);
	}
	return (NULL);
}
