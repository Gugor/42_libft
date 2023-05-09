CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.h
OBJ = main.o ft_isalpha.o

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

libft : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@echo ""

fclean: clean

re:
