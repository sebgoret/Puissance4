/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btradd_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 07:00:36 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:03:48 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tree.h>

void		ft_btradd_left(t_btree **root, t_btree *new)
{
	if (*root)
	{
		if ((*root)->left)
			ft_btradd_left(&((*root)->left), new);
		else
			(*root)->left = new;
	}
}
