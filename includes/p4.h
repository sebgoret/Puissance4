/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:24:50 by sebgoret          #+#    #+#             */
/*   Updated: 2014/03/09 21:00:44 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P4_H

# define P4_h
# include <libft.h>

# define RED	ft_putstr("\033[0;31m◉\033[0;m")
# define YELLOW ft_putstr("\033[0;33m◉\033[0;m")
# define D1		(p->map[c->y - i][c->x - i] == player)
# define D2		(p->map[c->y + i][c->x + i] == player)
# define D3		(p->map[c->y + i][c->x - i] == player)
# define D4		(p->map[c->y - i][c->x + i] == player)
# define READ_ENTRY 4096

typedef struct	s_p4
{
	int			h;
	int			w;
	char		**map;
}				t_p4;

typedef struct	s_coup
{
	int			x;
	int			y;
	int			power;
}				t_coup;

typedef struct	s_cps
{
	int			x;
	t_coup		tab[1000];
}				t_cps;

int				ft_random(int w);
char			ft_random_player(void);
t_p4			*ft_create_p4(int h, int w);
t_p4			*ft_copy_p4(t_p4 *p);
void			ft_put_p4(t_p4 *p);
void			ft_destroy_p4(t_p4 *p);
char			ft_change_player(char player);
t_coup			*ft_try_to_place(t_p4 **p, char player);
void			ft_pvp(t_p4 **p, char player);
int				ft_play(t_p4 **p, char player, t_coup *c);
void			ft_reset_p4(t_p4 *p);
t_coup			*ft_create_coup(int x, int y);
int				ft_is_finished(t_p4 *p, t_coup *c, char player);
int				ft_how_in_line(t_p4 *p, t_coup *c, char player);
int				ft_how_in_column(t_p4 *p, t_coup *c, char player);
int				ft_how_in_diag1(t_p4 *p, t_coup *c, char player);
int				ft_how_in_diag2(t_p4 *p, t_coup *c, char player);
void			ft_put_player(char player);
int				ft_ask_to_play(void);
void			ft_start_game(t_p4 *p);
void			ft_replay(t_p4 *p, int flag);
void			ft_IA(t_p4 **p, char player);
t_coup			*ft_test_IA(t_p4 *p, char color);
void			ft_end_turn(int i, int end, char player);
t_list			*ft_find_all(t_p4 *p);

#endif
