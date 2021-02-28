# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 07:21:24 by bpatrici          #+#    #+#              #
#    Updated: 2021/02/28 07:21:31 by bpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re all libft.a
CC = gcc
SRC_PATH =./srcs/
SRCS =  ${SRC_PATH}ft_swap.c ${SRC_PATH}ft_strlen.c ${SRC_PATH}ft_strcmp.c ${SRC_PATH}ft_putstr.c ${SRC_PATH}ft_putchar.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = -I ./includes/

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${SRC_PATH} ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all 
