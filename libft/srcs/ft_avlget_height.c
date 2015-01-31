/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlget_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 09:51:53 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 15:28:52 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int			ft_avlget_height(t_avltree *tree)
{
	if (!tree)
		return (0);
	return (tree->height);
}
