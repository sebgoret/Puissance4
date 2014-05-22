/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:03:44 by sebgoret          #+#    #+#             */
/*   Updated: 2014/01/16 12:00:54 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (ft_strncmp(s1, s2, n))
			return (0);
	return (1);
}
