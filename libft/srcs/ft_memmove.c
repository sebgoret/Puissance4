/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 15:19:30 by sebgoret          #+#    #+#             */
/*   Updated: 2014/01/25 16:24:30 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void		*ft_memmove(void *dst, void const *src, size_t n)
{
	void	*mov;

	mov = (void *)malloc(n);
	mov = ft_memcpy(mov, src, n);
	dst = ft_memcpy(dst, mov, n);
	free(mov);
	return (dst);
}
