/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:17:56 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/23 18:53:21 by jerdubos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_isspace(char c)
{
	if (c == 32 || c == 9 || c == 10)
		return (1);
	return (0);
}

static size_t	ft_get_len(char const *s)
{
	size_t		len;

	len = ft_strlen(s);
	while (ft_isspace(*s++))
		len--;
	while (*s)
		s++;
	s--;
	while (ft_isspace(*s--))
		len--;
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t		len;
	char		*trim;
	char		*tmp;

	if (!s)
		return (NULL);
	len = ft_get_len(s);
	trim = ft_strnew(len);
	if (trim)
	{
		tmp = trim;
		while (ft_isspace(*s))
			s++;
		while (len--)
			*tmp++ = *s++;
	}
	return (trim);
}
