# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 15:02:17 by chford            #+#    #+#              #
#    Updated: 2018/11/11 23:16:32 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SOURCES = sources/add_to_string.c \
		   sources/ft_putnbr.c \
		   sources/list_handling.c \
		   sources/rush01.c \
		   sources/rush04.c \
		   sources/compare.c \
		   sources/ft_strcmp.c \
		   sources/main.c \
		   sources/rush02.c \
		   sources/width_height.c \
		   sources/ft_putchar.c \
		   sources/ft_strcpy.c \
		   sources/rush00.c \
		   sources/rush03.c

OUTPUT = output.o

INCLUDE = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES) -I $(INCLUDE)

clean:
	/bin/rm -f $(OUTPUT)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
