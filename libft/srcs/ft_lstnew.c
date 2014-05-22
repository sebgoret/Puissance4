/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:13:15 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 06:41:46 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <list.h>

t_list		*ft_lstnew(void *content, int content_size)
{
	t_list		*new;

	new = (t_list *)ft_memalloc(sizeof(*new));
	if (new)
	{
		if (content)
		{
			new->content = ft_memalloc(content_size);
			if (new->content)
				new->content = ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	return (new);
}
