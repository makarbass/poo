SRCS	=	main.c functions.c symbols.c

OBJS	=	main.o functions.o symbols.o

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	bsq

.PHONY:	all clean fclean re


.c.o:
	${CC} ${CFLAGS} -c ${SRCS} 
	
${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS}:		${SRCS}
	${CC} ${CFLAGS} -c ${SRCS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all