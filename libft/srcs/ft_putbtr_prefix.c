/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbtr_prefix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:33:47 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:40:22 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

void		ft_putbtr_prefix(t_btree *root)
{
	if (root)
	{
		ft_putendl(root->content);
		if (root->left)
			ft_putbtr_prefix(root->left);
		if (root->right)
			ft_putbtr_prefix(root->right);
	}
}
