/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/23 15:30:19 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:34:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

static int		ft_epur_size(char *str)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]))
		{
			i++;
			size++;
			while (str[i] && ft_isspace(str[i]))
				i++;
		}
		else
		{
			i++;
			size++;
		}
	}
	return (size);
}

static char		*ft_epur_cpy(char *src, char *dst)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (ft_isspace(src[i]))
		{
			dst[j++] = ' ';
			while (ft_isspace(src[i]))
				i++;
		}
		else
			dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dst);
}

char			*ft_epur_str(char *str)
{
	char	*tmp;
	int		size;

	tmp = ft_strtrim(str);
	ft_strdel(&str);
	size = ft_epur_size(tmp);
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str)
		str = ft_epur_cpy(tmp, str);
	ft_strdel(&tmp);
	return (str);
}
