/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btradd_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 06:59:09 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:00:31 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tree.h>

void		ft_btradd_right(t_btree **root, t_btree *new)
{
	if (*root)
	{
		if ((*root)->right)
			ft_btradd_right(&((*root)->right), new);
		else
			(*root)->right = new;
	}
}
