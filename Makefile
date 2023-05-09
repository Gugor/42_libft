NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
DEPS = libft.h Makefile
OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o

all: $(NAME)

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "~. You broke the computer ('o') !!!!"
	@echo "~. No just kidding. All files where cleaned. ; D"

fclean: clean
	@rm -f $(NAME)
re: fclean all
