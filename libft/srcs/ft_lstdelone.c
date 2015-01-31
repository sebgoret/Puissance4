/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:27:16 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/21 13:53:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

void			ft_lstdelone(t_list **dl, void (*del)(void *, size_t))
{
	if (dl && del)
	{
		del((*dl)->content, (*dl)->content_size);
		free(*dl);
		*dl = NULL;
		dl = NULL;
	}
}
