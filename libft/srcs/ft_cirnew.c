/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cirnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 04:45:15 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:33:50 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "list.h"

t_circle		*ft_cirnew(char *content)
{
	t_circle	*new;

	new = (t_circle *)malloc(sizeof(t_circle));
	if (new)
	{
		if (content)
			new->content = ft_strdup(content);
		else
			new->content = NULL;
		new->size = ft_strlen(new->content);
		new->next = new;
		new->prev = new;
	}
	return (new);
}
