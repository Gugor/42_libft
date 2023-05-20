NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
DEPS = libft.h Makefile
OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o \
	  ft_toupper.o ft_tolower.o ft_bzero.o ft_memcpy.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
<<<<<<< HEAD
	  ft_memchr.o ft_memcmp.o ft_memmove.o ft_strnstr.o \

=======
	  ft_memchr.o ft_memcmp.o ft_memmove.o
ft_strlcpy.o
>>>>>>> 70b021418dcca9caf07948a5cdbbe3ee06ca4ad7
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
