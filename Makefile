# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 14:35:25 by csekakul          #+#    #+#              #
#    Updated: 2026/01/29 13:25:30 by csekakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar.c \
		prt_int.c \
		prt_str.c \
		ft_strlen.c \

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)
bonus: $(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
