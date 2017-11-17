#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clemaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 10:23:18 by clemaire          #+#    #+#              #
#    Updated: 2017/11/17 15:24:27 by clemaire         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = "libft.a"

SRC = "srcs/ft_putchar.c" \
	"srcs/ft_putstr.c" \
	"srcs/ft_strcmp.c" \
	"srcs/ft_strlen.c" \
	"srcs/ft_swap.c"

OBJ = "ft_putchar.o" \
    "ft_putstr.o" \
    "ft_strcmp.o" \
    "ft_strlen.o" \
    "ft_swap.o"

INCLUDES_DIR = includes/

all: ${NAME}

${NAME}:
	gcc -I${INCLUDES_DIR} -Wall -Wextra -Werror -c ${SRC}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -f *\~ \#*\# *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
