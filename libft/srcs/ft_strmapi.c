/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:54:59 by sebgoret          #+#    #+#             */
/*   Updated: 2014/01/16 11:38:36 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new)
		{
			i = 0;
			while (s[i])
			{
				new[i] = f(i, s[i]);
				i++;
			}
		}
		return (new);
	}
	return (NULL);
}
