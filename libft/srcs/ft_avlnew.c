/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 09:40:36 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:30:29 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <tree.h>

t_avltree		*ft_avlnew(char *key, char *value)
{
	t_avltree		*new;

	new = (t_avltree *)ft_memalloc(sizeof(*new));
	if (new)
	{
		new->left = NULL;
		new->right = NULL;
		new->key = ft_strdup(key);
		new->value = ft_strdup(value);
	}
	return (new);
}
