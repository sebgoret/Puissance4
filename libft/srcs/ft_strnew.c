/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:43:12 by sebgoret          #+#    #+#             */
/*   Updated: 2014/02/14 12:40:03 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char		*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(*new) * (size + 1));
	ft_bzero(new, (size + 1));
	return (new);
}
