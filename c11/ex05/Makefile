# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 17:54:25 by bpatrici          #+#    #+#              #
#    Updated: 2021/03/03 18:11:00 by bpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re
CC = gcc
NAME = do-op
FLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_atoi.c ft_putnbr.c ft_putstr.c operation.c
OBJS = *.o

all:
	@${CC} ${FLAGS} -c ${SRCS} 
	@${CC} ${FLAGS} -o ${NAME} ${OBJS} 	

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}
