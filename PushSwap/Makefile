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

SRC_NAME	=	check_pile.c \
				main.c \
				op_pile_a.c \
				op_pile_b.c \
				op_pile_double.c \
				pile.c \
				pile_init.c \
				pile_tools.c \
				print_error.c \
				print_pile.c \
				print_tools.c \
				ia.c
				
HEADER 		= $(INC_PATH)push_swap.h


LIBS		= -Llibs/ -lft

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g

SRC			= $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJS 		= $(addprefix $(OBJ_PATH),$(subst .c,.o,$(SRC_NAME)))
BIN			= $(addprefix $(BIN_PATH),$(NAME))



.PHONY: all clean fclean re proper

all:	$(BIN)

$(BIN): $(OBJS) $(HEADER) | $(BIN_PATH)
	$(CC) $(CFLAGS) -I$(INC_PATH) $(OBJS) -o $(BIN) $(LIBS)

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
	rm -rf $(OBJS)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

proper: all clean

re:	fclean all
