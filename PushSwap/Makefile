# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 15:35:12 by ghilbert          #+#    #+#              #
#    Updated: 2014/11/29 15:35:14 by ghilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

BIN_PATH	= bin/
SRC_PATH	= ./
OBJ_PATH	= obj/
INC_PATH	= includes/

SRC_NAME	=	check_args.c \
				init.c \
				main.c \
				move_a.c \
				move_ab.c \
				move_b.c \
				moves.c \
				pile.c \
				print.c \
				sort.c

HEADER 		= $(INC_PATH)ps.h

LIBFT_PATH	= libft
LIBFT_NAME	= -lft
OTHER_LIBS	= -lm
LIBFT		= -L$(LIBFT_PATH) $(LIBFT_NAME)
LIBS		= $(LIBFT)

CC			= clang
CFLAGS		+= -Wall -Werror -Wextra

SRC			= $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJS 		= $(addprefix $(OBJ_PATH),$(subst .c,.o,$(SRC_NAME)))
BIN			= $(addprefix $(BIN_PATH),$(NAME))



.PHONY: all clean fclean re proper libft debug

all:	$(BIN)

$(NAME): $(BIN)

$(BIN): $(OBJS) $(HEADER) libft/libft.a | $(BIN_PATH)
	$(CC) $(CFLAGS) -I$(INC_PATH) $(OBJS) -o $(BIN) $(LIBS)

libft/libft.a:
	make -C libft

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH)%.o : %.c $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@ -I $(INC_PATH)

$(OBJ_PATH):
	@if [ ! -d "$(OBJ_PATH)" ]; then \
		mkdir $(OBJ_PATH);\
		fi

$(BIN_PATH):
	@if [ ! -d "$(BIN_PATH)" ]; then \
		mkdir $(BIN_PATH);\
		fi

clean:
	@make clean -C libft
	rm -rf $(OBJS)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf libft/libft.a
	rm -rf $(BIN_PATH)

proper: all clean

re:	fclean all

debug :
	CFLAGS="-g" make re
