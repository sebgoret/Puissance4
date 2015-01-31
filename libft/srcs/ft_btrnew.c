/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 06:51:42 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:32:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tree.h"

t_btree			*ft_btrnew(char *content)
{
	t_btree		*new;

	new = (t_btree *)malloc(sizeof(*new));
	if (new)
	{
		new->left = NULL;
		new->right = NULL;
		new->content = ft_strdup(content);
	}
	return (new);
}
