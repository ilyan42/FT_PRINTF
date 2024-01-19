# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:24:06 by ilbendib          #+#    #+#              #
#    Updated: 2023/11/23 10:57:27 by ilbendib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_SRCS = ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_strlen.c\
	ft_putnbr_unsigned.c\
	ft_print_hexa.c\
	ft_print_ptr.c

SRC_DIR = .

SRCS = $(_SRCS:%=$(SRC_DIR)/%)

_HEADERS = ft_printf.h

HEADERS_DIR = .

HEADERS = $(_HEADERS:%=$(HEADERS_DIR)/%)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = rcs

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 
