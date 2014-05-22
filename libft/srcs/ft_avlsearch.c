/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 10:44:54 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 07:13:38 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <tree.h>

char		*ft_avlsearch(t_avltree **root, char *key_searched)
{
	int		cmp;

	cmp = ft_strcmp((*root)->key, key_searched);
	if (!cmp)
		return ((*root)->value);
	else
	{
		if ((*root)->left && (cmp < 0))
			return (ft_avlsearch(&((*root)->left), key_searched));
		else if ((*root)->right && (cmp > 0))
			return (ft_avlsearch(&((*root)->right), key_searched));
		else
			return (NULL);
	}
}
