.PHONY: all, clean, libft.a
CC = gcc
SRC_PATH = srcs
CFLAGS = -Wall -Wextra -Werror -Iincludes

all: libft.a

libft.a: ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o
	ar rc libft.a $(SRC_PATH)/*.o
	ranlib libft.a

ft_swap.o: $(SRC_PATH)/ft_swap.c
	$(CC) -c $(CFLAGS) $(SRC_PATH)/ft_swap.c -o $(SRC_PATH)/ft_swap.o

ft_strlen.o: $(SRC_PATH)/ft_strlen.c
	$(CC) -c $(CFLAGS) $(SRC_PATH)/ft_strlen.c -o $(SRC_PATH)/ft_strlen.o

ft_strcmp.o: $(SRC_PATH)/ft_strcmp.c
	$(CC) -c $(CFLAGS) $(SRC_PATH)/ft_strcmp.c -o $(SRC_PATH)/ft_strcmp.o

ft_putstr.o: $(SRC_PATH)/ft_putstr.c
	$(CC) -c $(CFLAGS) $(SRC_PATH)/ft_putstr.c -o $(SRC_PATH)/ft_putstr.o

ft_putchar.o: $(SRC_PATH)/ft_putchar.c
	$(CC) -c $(CFLAGS) $(SRC_PATH)/ft_putchar.c -o $(SRC_PATH)/ft_putchar.o

clean:
	 -rm $(SRC_PATH)/*.o
fclean:
	-rm -f libft.a
re:


