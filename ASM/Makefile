# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/09 02:27:17 by ghilbert          #+#    #+#              #
#    Updated: 2015/07/01 19:54:25 by ghilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

SRCS =  ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_islower.s \
		ft_isupper.s \
		ft_isprint.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_bzero.s \
		ft_strcat.s \
		ft_strlen.s \
		ft_memcpy.s \
		ft_memset.s

OBJS = $(patsubst %.s,obj/%.o,$(SRCS))

NASM ?= nasm
MKDIR ?= mkdir

NFLAGS += -i $(realpath inc)/

ifeq ($(shell uname), Linux)
	NFLAGS += -felf64 -DLINUX
else
	NFLAGS += -fmacho64 -DOSX --prefix _
endif

CFLAGS += -Wall -Wextra -Werror -Iincludes/ -Ilibft/includes

obj/%.o: %.s
	@$(MKDIR) -p $(dir $@)
	$(NASM) $(NFLAGS) -o $@ $<

all: $(NAME)

out: $(NAME)
	$(CC) -Iincludes/ mainTom.c -o $@ -L. -lfts

test: $(NAME)
	$(CC) -Iincludes/ maintest.c -o $@ -L. -lfts

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
