#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/16 10:52:14 by sebgoret          #+#    #+#              #
#    Updated: 2014/03/09 20:56:56 by sebgoret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = puissance4

CFLAGS = -Wall -Wextra -Werror -pedantic -std=c89

CC = clang $(CFLAGS)

LIBFT = -L$(DLIB) -lft

DLIB = libft/
DINC = includes/
DSRC = srcs/
DOBJ = objs/
DMAI = ./

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


OBJ = $(patsubst %.c, $(DOBJ)%.o, $(SRC))

RMF = /bin/rm -f
RMD = /bin/rm -Rf
MKD = /bin/mkdir -p

all: libft $(NAME)

$(DOBJ)%.o: $(DMAI)%.c
	@echo "Compilation du main:\033[0;32m"
	@$(MKD) $(DOBJ)
	$(CC) -o $@ -c $< -I $(DINC) -I $(DLIB)$(DINC)
	@echo "\033[0;m\c"

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@echo "Compilation de l'objet:\033[0;32m"
	$(CC) -o $@ -c $< -I $(DINC) -I $(DLIB)$(DINC)
	@echo "\033[0;m\c"

$(NAME): $(DLIB)libft.a $(OBJ)
	@echo "Creation de l'executable:\033[0;32m"
	$(CC) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "\033[0;m\c"

libft:
	@echo "Compilation des sources de la lib:"
	@make -C $(DLIB)

clean:
	@echo "Suppression des objets du projet:\033[0;31m"
	$(RMF) $(OBJ)
	@echo "\033[0;m\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "Suppression de l'executable\033[0;31m"
	$(RMF) $(NAME)
	@echo "\033[0;m\c"

libclean:
	@echo "Suppression de la librairie libft.a, et de ses objets:"
	@make -C $(DLIB) fclean

re: fclean all

.PHONY: all libft libclean clean fclean re
