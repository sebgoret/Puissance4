/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:51:13 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/21 13:47:25 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t			i;
	int				j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (i < n && s2[j] && *s1)
	{
		if (*s1 == s2[j])
		{
			s1++;
			i++;
			j++;
		}
		else
		{
			s1 = s1 - j + 1;
			i = i - j + 1;
			j = 0;
		}
	}
	if (s2[j] == '\0')
		return ((char *)s1 - j);
	return (NULL);
}
