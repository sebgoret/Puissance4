/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putavl_infix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:42:01 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:48:08 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

void		ft_putavl_infix(t_avltree *root)
{
	if (root)
	{
		if (root->left)
			ft_putavl_prefix(root->left);
		ft_putstr(root->key);
		ft_putstr(": ");
		ft_putendl(root->value);
		if (root->right)
			ft_putavl_prefix(root->right);
	}
}
