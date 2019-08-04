# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 09:52:11 by chford            #+#    #+#              #
#    Updated: 2018/11/05 12:33:45 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

OUTPUT = ft_putchar.o \
	ft_putstr.o \
	ft_strcmp.o \
	ft_strlen.o \
	ft_swap.o

INCLUDE = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCES) -I $(INCLUDE)
	ar rc $(NAME) $(OUTPUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUTPUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
