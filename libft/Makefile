#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/23 11:32:48 by sebgoret          #+#    #+#              #
#    Updated: 2015/01/30 18:35:27 by sebgoret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all clean fclean re

NAME = libft.a

#FLAGS

FLAGS = -Wall -Wextra -Werror
CFLAGS = $(FLAGS) -pedantic -std=c89

DEBUG = -g
SPEED = -g0 -O3

#COMPILE

ifeq ($(check), 1)
	CC = gcc $(CFLAGS) $(DEBUG)
else
	CC = gcc $(CFLAGS) $(SPEED)
endif

CCASM = nasm -f macho64 -g

#FOLDERS

DSRC = srcs/
DOBJ = objs/
DINC = includes/

#SOURCES

CSRC =	ft_atoi.c			\
		ft_itoa.c			\
							\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
							\
		ft_strnew.c			\
		ft_epur_str.c		\
		ft_strtrim.c		\
		ft_strclr.c			\
		ft_strdel.c			\
		ft_strcpy.c			\
		ft_strncpy.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_strncat.c		\
		ft_strlcat.c		\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
							\
		ft_strsplit.c		\
		ft_strsub.c			\
		ft_strjoin.c		\
							\
		ft_strlen.c			\
		ft_strcmp.c			\
		ft_strequ.c			\
		ft_strncmp.c		\
		ft_strnequ.c		\
							\
		ft_putchar.c		\
		ft_putchar_fd.c		\
		ft_putstr.c			\
		ft_putstr_fd.c		\
		ft_putendl.c		\
		ft_putendl_fd.c		\
		ft_putnbr.c			\
		ft_putnbr_fd.c		\
							\
		ft_lstnew.c			\
		ft_lstadd.c			\
		ft_lstadd_head.c	\
		ft_lstadd_tail.c	\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_putlst.c			\
		ft_lstmap.c			\
		ft_lstiter.c		\
							\
		ft_cirnew.c			\
		ft_ciradd_head.c	\
		ft_ciradd_tail.c	\
		ft_cirdelone.c		\
		ft_cirdel.c			\
		ft_putcir.c			\
							\
		ft_avlnew.c			\
		ft_avladd.c			\
		ft_avlset_height.c	\
		ft_avlget_height.c	\
		ft_avlrot_left.c	\
		ft_avlrot_right.c	\
		ft_avlbalance.c		\
		ft_avldestroy.c		\
		ft_avlsearch.c		\
		ft_putavl_prefix.c	\
		ft_putavl_infix.c	\
		ft_putavl_sufix.c	\
							\
		ft_btrnew.c			\
		ft_btradd_left.c	\
		ft_btradd_right.c	\
		ft_btrdestroy.c		\
		ft_putbtr_prefix.c	\
		ft_putbtr_infix.c	\
		ft_putbtr_sufix.c	\
							\
		ft_destroy_split.c	\
		ft_error.c			\
		ft_syscall_error.c	\
		ft_fatal_error.c	\
		ft_count_tab.c		\
		ft_get_next_line.c

SSRC =	ft_bzero.s			\
		ft_cat.s			\
		ft_isalnum.s		\
		ft_isalpha.s		\
		ft_isascii.s		\
		ft_isdigit.s		\
		ft_isprint.s		\
		ft_memcpy.s			\
		ft_memset.s			\
		ft_puts.s			\
		ft_puts_fd.s		\
		ft_strcat.s			\
		ft_strdup.s			\
		ft_strlen.s			\
		ft_tolower.s		\
		ft_toupper.s

#PATHSUB RULES

OBJ = $(patsubst %.s, $(DOBJ)%.o, $(SSRC))
OBJ2 = $(patsubst %.c, $(DOBJ)%.o, $(CSRC))

#DEFAULT SHELL COMMAND

RMF = /bin/rm -f
RMD = /bin/rm -Rf
MKD = /bin/mkdir -p

#COLOR SHORTCUTS

PURPLE = \033[38;5;54m
YELLOW = \033[33m
GREEN = \033[32m
RED = \033[0;31m
WHITE = \033[0;0m

all: $(NAME)

$(DOBJ)%.o: $(DSRC)%.s
	@$(MKD) $(DOBJ)
	@$(CCASM) -o $@ $<
	@echo "$(PURPLE)$(CCASM)$(GREEN) -o $@ -$^ $(WHITE)"

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@$(CC) -o $@ -c $< -I $(DINC)
	@echo "$(PURPLE)$(CC)$(GREEN) -o $@ -$^ $(YELLOW) -I $(DINC) $(WHITE)"

$(NAME): $(OBJ) $(OBJ2)
	@echo "$(WHITE)function library generation:"
	@ar rcs $(NAME) $(OBJ) $(OBJ2)
	@echo "$(PURPLE)ar rcs $(GREEN)$(NAME) $(YELLOW)$(OBJ) $(OBJ2)$(WHITE)"
	@ranlib $(NAME)
	@echo "$(PURPLE)ranlib $(GREEN)$(NAME)\033[0m"

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
