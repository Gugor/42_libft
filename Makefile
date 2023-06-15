# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 16:24:04 by hmontoya          #+#    #+#              #
#    Updated: 2023/06/03 18:38:09 by hmontoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
DEPS = libft.h Makefile
OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o \
	  ft_toupper.o ft_tolower.o ft_bzero.o ft_memcpy.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
	  ft_memchr.o ft_memcmp.o ft_memmove.o ft_strnstr.o ft_memchr.o ft_memcmp.o ft_memmove.o \
	  ft_strlcpy.o ft_strlcat.o ft_atoi.o ft_calloc.o ft_strdup.o ft_strjoin.o ft_substr.o \
	  ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o ft_strmapi.o \
	  ft_striteri.o ft_strtrim.o ft_split.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o 
BOBJ = ft_lstnew.o ft_lstadd_front.o
all: $(NAME)

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME) : $(OBJ)
	@ar rcsv $(NAME) $(OBJ)

bonus : $(NAME)
	@ar rcsv $(NAME) $(BOBJ)
clean:
	@echo "\33^[1;36mCleaning files...\33[1;0m";
	@rm -vf $(OBJ)
	@echo "~. You broke the computer \('o')/ !!!!"
	@echo "~. No just kidding. All files where cleaned. ; D"

fclean: clean
	@rm -fv $(NAME)
re: fclean all

.PHONY : clean fclean re all
