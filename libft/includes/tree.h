/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 06:47:47 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 11:04:21 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

typedef struct			s_avltree
{
	char				*key;
	char				*value;
	int					height;
	struct s_avltree	*left;
	struct s_avltree	*right;
}						t_avltree;

typedef struct			s_btree
{
	char				*content;
	struct s_btree		*left;
	struct s_btree		*right;
}						t_btree;

t_avltree				*ft_avlnew(char *key, char *value);
void					ft_avladd(t_avltree **root, t_avltree *new);
t_avltree				*ft_avlbalance(t_avltree *tree);
int						ft_avlget_height(t_avltree *tree);
void					ft_avlset_height(t_avltree *tree);
t_avltree				*ft_avlrot_left(t_avltree *tree);
t_avltree				*ft_avlrot_right(t_avltree *tree);
void					ft_avldestroy(t_avltree **tree);
char					*ft_avlsearch(t_avltree **root, char *key_searched);
void					ft_putavl_prefix(t_avltree *root);
void					ft_putavl_infix(t_avltree *root);
void					ft_putavl_sufix(t_avltree *root);

t_btree					*ft_btrnew(char *content);
void					ft_btradd_left(t_btree **root, t_btree *new);
void					ft_btradd_right(t_btree **root, t_btree *new);
void					ft_btrdestroy(t_btree **tree);
void					ft_putbtr_prefix(t_btree *root);
void					ft_putbtr_infix(t_btree *root);
void					ft_putbtr_sufix(t_btree *root);

#endif
