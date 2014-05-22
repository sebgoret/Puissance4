/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avladd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:13:10 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:31:20 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <tree.h>

void		ft_avladd(t_avltree **root, t_avltree *new)
{
	if (ft_strcmp((*root)->key, new->key) > 0)
	{
		if (!(*root)->left)
			(*root)->left = new;
		else
			ft_avladd(&((*root)->left), new);
	}
	else if (ft_strcmp((*root)->key, new->key) < 0)
	{
		if (!(*root)->right)
			(*root)->right = new;
		else
			ft_avladd(&((*root)->right), new);
	}
	else
	{
		free((*root)->value);
		(*root)->value = ft_strdup(new->value);
		ft_avldestroy(&new);
	}
	(*root) = ft_avlbalance((*root));
}
