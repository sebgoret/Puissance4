/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbtr_sufix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:34:00 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:46:52 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tree.h"

void		ft_putbtr_sufix(t_btree *root)
{
	if (root)
	{
		if (root->left)
			ft_putbtr_prefix(root->left);
		if (root->right)
			ft_putbtr_prefix(root->right);
		ft_putendl(root->content);
	}
}
