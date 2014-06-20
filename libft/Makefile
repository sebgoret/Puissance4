#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/15 18:12:53 by sebgoret          #+#    #+#              #
#    Updated: 2014/06/20 19:16:37 by sebgoret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CFLAGS = $(FLAGS) -ansi -pedantic -std=c89 -g

CC = clang $(CFLAGS)

DINC = includes/
DSRC = srcs/
DOBJ = objs/

SRC =	ft_atoi.c			\
		ft_itoa.c			\
		ft_tolower.c		\
		ft_toupper.c		\
							\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
							\
		ft_memalloc.c		\
		ft_memset.c			\
		ft_memdel.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
							\
		ft_strnew.c			\
		ft_bzero.c			\
		ft_epur_str.c		\
		ft_strtrim.c		\
		ft_strclr.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strcpy.c			\
		ft_strncpy.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_strcat.c			\
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
		ft_lstadd_head.c	\
		ft_lstadd_tail.c	\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_putlst.c			\
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

OBJ = $(patsubst %.c, $(DOBJ)%.o, $(SRC))

RMF = /bin/rm -f
RMD = /bin/rm -Rf
MKD = /bin/mkdir -p

all: $(NAME)

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@echo "\033[0;32m\c"
	$(CC) -o $@ -c $< -I $(DINC)

$(NAME): $(OBJ)
	@echo "\033[0;0mCreation de la libft:\033[0;32m"
	ar rcs $(NAME) $(OBJ)
	@echo "\033[0;0m\c"

clean:
	@echo "\033[0;31m\c"
	$(RMF) $(OBJ)
	@echo "\033[0;0m\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "\033[0;31m\c"
	$(RMF) $(NAME)
	@echo "\033[0;0m\c"

re: fclean all

.PHONY: all clean fclean re