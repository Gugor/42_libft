# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 16:24:04 by hmontoya          #+#    #+#              #
#    Updated: 2023/05/20 22:32:14 by hmontoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
DEPS = libft.h Makefile
OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o \
	  ft_toupper.o ft_tolower.o ft_bzero.o ft_memcpy.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
	  ft_memchr.o ft_memcmp.o ft_memmove.o ft_strnstr.o ft_memchr.o ft_memcmp.o ft_memmove.o \
	  ft_strlcpy.o ft_strlcat.o
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
