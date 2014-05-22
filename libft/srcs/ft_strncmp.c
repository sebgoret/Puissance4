/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:26:15 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:35:13 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (!n || (!*s1 && !*s2))
		return (0);
	else if (*s1 != *s2)
		return (*s1 - *s2);
	return (ft_strncmp(++s1, ++s2, --n));
}
