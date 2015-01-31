/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/17 16:29:00 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 17:57:39 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_nb_separator(char const *s, char c)
{
	int		sep;
	int		nb_sp;
	int		i;

	nb_sp = 0;
	sep = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			sep++;
			while (s[i++] == c)
				nb_sp++;
		}
		else
			i++;
	}
	if (nb_sp == i)
		return (-1);
	return (sep);
}

static void		ft_write_in_split(char **split, char const *s, char c)
{
	int		i;
	int		j;
	int		word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			split[j++] = ft_strsub(s, (i - word_len), word_len);
			while (s[i] == c)
				i++;
			word_len = 0;
		}
		else
		{
			i++;
			word_len++;
		}
	}
	if (word_len)
		split[j++] = ft_strsub(s, (i - word_len), word_len);
	split[j] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = (1 + ft_nb_separator(s, c));
	split = (char **)malloc(sizeof(*split) * (nb_words + 1));
	if (split)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
			ft_write_in_split(split, s, c);
		else
			split[0] = NULL;
	}
	return (split);
}
