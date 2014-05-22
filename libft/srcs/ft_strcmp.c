/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 16:36:35 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:35:29 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strcmp(char const *s1, char const *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if (*s1 != *s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (ft_strcmp(++s1, ++s2));
}
