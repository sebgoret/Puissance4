/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlrot_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 09:58:10 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:29:29 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_avltree		*ft_avlrot_right(t_avltree *tree)
{
	t_avltree		*new;

	new = tree->left;
	tree->left = new->right;
	new->right = tree;
	ft_avlset_height(new->right);
	ft_avlset_height(new);
	return (new);
}
