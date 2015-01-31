/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlrot_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 09:57:57 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:27:04 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_avltree		*ft_avlrot_left(t_avltree *tree)
{
	t_avltree		*new;

	new = tree->right;
	tree->right = new->left;
	new->left = tree;
	ft_avlset_height(new->left);
	ft_avlset_height(new);
	return (new);
}
