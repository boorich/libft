# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/13 14:27:16 by mmaurer           #+#    #+#              #
#    Updated: 2021/09/05 15:52:30 by mmaurer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_atoi.c ft_strlen.c ft_strlcpy.c ft_memmove.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memchr.c \
	ft_memcmp.c ft_strdup.c ft_calloc.c ft_substr.c ft_strtrim.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRC) #${SRC:.c=.o}
HEADERS = libft.h
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): clean
	@$(CC) -c $(FLAGS) $(OBJS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@rm -f *.o *.gch
#	norminette $(SRC)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

test: all
	@$(CC) ../tests/test_ft_putnbr_fd.c -L. -lft -o ../tests/a.out
	@../tests/a.out

.PHONY:	all clean fclean re test