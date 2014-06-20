/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 15:54:32 by sebgoret          #+#    #+#             */
/*   Updated: 2014/06/20 19:16:06 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char		*ft_strdup(char const *src)
{
	char	*dup;

	if (!src)
		return (NULL);
	dup = (char *)malloc(sizeof(*dup) * (ft_strlen(src) + 1));
	if (dup)
		dup = ft_strcpy(dup, src);
	return (dup);
}
