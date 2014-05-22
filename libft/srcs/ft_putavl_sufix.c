/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putavl_sufix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:43:48 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:47:55 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

void		ft_putavl_sufix(t_avltree *root)
{
	if (root)
	{
		if (root->left)
			ft_putavl_prefix(root->left);
		if (root->right)
			ft_putavl_prefix(root->right);
		ft_putstr(root->key);
		ft_putstr(": ");
		ft_putendl(root->value);
	}
}
