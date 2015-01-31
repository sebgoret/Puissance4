/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlset_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 09:53:17 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:30:07 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void		ft_avlset_height(t_avltree *tree)
{
	int		left_ht;
	int		right_ht;

	if (tree)
	{
		left_ht = ft_avlget_height(tree->left);
		right_ht = ft_avlget_height(tree->right);
		tree->height = (left_ht > right_ht) ? (1 + left_ht) : (1 + right_ht);
	}
}
