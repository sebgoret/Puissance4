/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlbalance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:03:37 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:07:47 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tree.h>

t_avltree		*ft_avlbalance(t_avltree *tree)
{
	t_avltree		*left;
	t_avltree		*right;

	left = tree->left;
	right = tree->right;
	ft_avlset_height(tree);
	if ((ft_avlget_height(left) - ft_avlget_height(right)) == 2)
	{
		if (ft_avlget_height(left->left) > ft_avlget_height(left->right))
			left = ft_avlrot_left(left);
		return (ft_avlrot_right(tree));
	}
	else if ((ft_avlget_height(left) - ft_avlget_height(right)) == -2)
	{
		if (ft_avlget_height(right->left) > ft_avlget_height(right->right))
			right = ft_avlrot_right(right);
		return (ft_avlrot_left(tree));
	}
	else
		return (tree);
}
