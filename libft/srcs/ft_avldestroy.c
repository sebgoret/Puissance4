/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avldestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:19:29 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:28:41 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "tree.h"

void		ft_avldestroy(t_avltree **tree)
{
	if (tree && *tree)
	{
		if ((*tree)->right)
			ft_avldestroy(&((*tree)->right));
		if ((*tree)->left)
			ft_avldestroy(&((*tree)->left));
		free((*tree)->key);
		free((*tree)->value);
		free(*tree);
		*tree = NULL;
	}
}
