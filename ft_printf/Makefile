# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 19:46:25 by brjoves           #+#    #+#              #
#    Updated: 2023/11/16 09:58:11 by brjoves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_hexadecimal.c ft_nbr.c ft_pointer.c ft_putchar_len.c \
		ft_unsigned_int.c ft_str.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
AR = ar crs
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c

all: ${NAME}

%.o : %.c
		${CC} ${CFLAGS} $< -o $@

${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re