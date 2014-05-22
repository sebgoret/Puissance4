/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putavl_prefix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:43:22 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:47:41 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

void		ft_putavl_prefix(t_avltree *root)
{
	if (root)
	{
		ft_putstr(root->key);
		ft_putstr(": ");
		ft_putendl(root->value);
		if (root->left)
			ft_putavl_prefix(root->left);
		if (root->right)
			ft_putavl_prefix(root->right);
	}
}
