# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 12:59:27 by bpatrici          #+#    #+#              #
#    Updated: 2021/03/01 20:44:03 by bpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: clean fclean all
NAME = ft_display_file
CC = gcc
CFAGS = -Wall -Wextra -Werror 
RM = rm -f
SRCS = ft_display_file.c ft_putstr.c
EXFILES = ft_display_file.o ft_putstr.o

all:
	${CC} ${CFLAGS} -c ${SRCS}
	${CC} ${CFLAGS} -o ${NAME} ${EXFILES}
	
clean:
	${RM} ${EXFILES}

fclean: clean 
	${RM} ${NAME}
