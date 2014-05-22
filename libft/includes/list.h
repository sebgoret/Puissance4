/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 06:35:28 by sebgoret          #+#    #+#             */
/*   Updated: 2014/04/26 06:39:09 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct			s_list
{
	void				*content;
	int					content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_circle
{
	void				*content;
	int					size;
	struct s_circle		*next;
	struct s_circle		*prev;
}						t_circle;

/*
** List with void * content
*/
t_list					*ft_lstnew(void *content, int content_size);
void					ft_lstadd_head(t_list **begin_list, t_list *new);
void					ft_lstadd_tail(t_list **begin_list, t_list *new);
void					ft_lstdelone(t_list **begin_list, t_list *del);
void					ft_lstdel(t_list **begin_list);
void					ft_putlst(t_list **list);

/*
** Circular Doubled chained List with char * content
*/
t_circle				*ft_cirnew(char *content);
void					ft_ciradd_head(t_circle **begin_circle, t_circle *new);
void					ft_ciradd_tail(t_circle **begin_circle, t_circle *new);
void					ft_cirdelone(t_circle **begin_circle, t_circle *del);
void					ft_cirdel(t_circle **begin_circle);
void					ft_putcir(t_circle **circle);

#endif
