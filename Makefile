# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 14:35:25 by csekakul          #+#    #+#              #
#    Updated: 2026/02/11 09:29:51 by csekakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar_pf.c \
		ft_puthex_pf.c \
		ft_putnbr_pf.c \
		ft_putptr_pf.c \
		ft_putstr_pf.c \
		ft_putuint_pf.c \
		ft_aux_pf.c \

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)
clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
