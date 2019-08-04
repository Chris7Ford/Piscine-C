# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 10:26:42 by chford            #+#    #+#              #
#    Updated: 2018/11/10 11:38:26 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SOURCES = sources/*.c

OUTPUT = *.o

INCLUDE = include/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES) -I $(INCLUDE)

clean:
	/bin/rm -f $(OUTPUT)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
