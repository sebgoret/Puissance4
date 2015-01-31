#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/16 10:52:14 by sebgoret          #+#    #+#              #
#    Updated: 2015/01/31 21:55:49 by sebgoret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
.PHONY: all clean fclean re clean_libft fclean_libft re_libft

.SUFFIXES:

NAME = puissance4

#LIBRARIES

LIBFT = -L$(DLIB) -lft

#FLAGS

FLAGS = -Wall -Wextra -Werror
CFLAGS = $(FLAGS) -ansi -pedantic -std=c89

DEBUG = -g
SPEED = -g0 -O3

#COMPILE

ifeq ($(check), 1)
	CC = gcc $(CFLAGS) $(DEBUG)
else
	CC = gcc $(CFLAGS) $(SPEED)
endif

#FOLDERS

DSRC = srcs/
DOBJ = objs/
DINC = includes/
DLIB = libft/

#SOURCES

SRC =	ft_copy_p4.c		\
		ft_create_p4.c		\
		ft_create_coup.c	\
		ft_destroy_p4.c		\
		ft_game.c			\
		ft_IA.c				\
		ft_test_IA.c		\
		ft_is_finished.c	\
		ft_play.c			\
		ft_put_p4.c			\
		ft_put_player.c		\
		ft_pvp.c			\
		ft_random.c			\
		ft_reset_p4.c		\
		main.c				\

#PATHSUB RULES

OBJ = $(patsubst %.c, $(DOBJ)%.o, $(SRC))

#DEFAULT SHELL COMMANDS

RMF = /bin/rm -f
RMD = /bin/rm -Rf
MKD = /bin/mkdir -p

#COLOR SHORTCUTS

PURPLE = \033[38;5;54m
BLUE = \033[34m
YELLOW = \033[33m
GREEN = \033[32m
RED = \033[0;31m
WHITE = \033[0;0m

all: $(DLIB)libft.a $(NAME)

$(DLIB)libft.a:
	@make -C $(DLIB)

clean_libft:
	@make -C $(DLIB) clean

fclean_libft:
	@make -C $(DLIB) fclean

re_libft:
	@make -C $(DLIB) re

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@$(CC) -o $@ -c $< -I $(DINC) -I $(DLIB)$(DINC) $(LIBFT)
	@echo "$(PURPLE)$(CC)$(GREEN) -o $@ -$^ $(YELLOW) -I $(DINC) -I $(DLIB)$(DINC) $(RED)$(LIBFT)$(WHITE)"

$(NAME): $(DLIB)libft.a $(OBJ)
	@echo "$(WHITE)Creation de l'executable :"
	@$(CC) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "$(PURPLE)$(CC) -o $(GREEN)$(NAME) $(BLUE)$(OBJ) $(RED)$(LIBFT)$(WHITE)"

clean:
	@echo "$(RED)\c"
	$(RMF) $(OBJ) $(OBJ2)
	@echo "$(WHITE)\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "$(RED)\c"
	$(RMF) $(NAME)
	@echo "$(WHITE)\c"

re: fclean all
