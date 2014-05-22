/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbtr_infix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:34:09 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:44:06 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

void		ft_putbtr_infix(t_btree *root)
{
	if (root)
	{
		if (root->left)
			ft_putbtr_prefix(root->left);
		ft_putendl(root->content);
		if (root->right)
			ft_putbtr_prefix(root->right);
	}
}
