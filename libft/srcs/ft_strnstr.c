/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:51:13 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:36:37 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (*s1 && s2[i] && i < n)
	{
		if (*s1 == s2[i])
		{
			if (s2[i + 1] == '\0' || i == n)
				return ((char *)s1 - i);
			else
			{
				s1++;
				i++;
			}
		}
		if (*s1 != s2[i])
		{
			s1 = s1 - i + 1;
			i = 0;
		}
	}
	return (NULL);
}
