# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 16:48:58 by chford            #+#    #+#              #
#    Updated: 2018/11/07 16:49:07 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SOURCES = sources/*.c

OUTPUT = *.o

INCLUDE = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES) -I $(INCLUDE)

clean:
	/bin/rm -f $(OUTPUT)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
