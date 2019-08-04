# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 07:27:08 by chford            #+#    #+#              #
#    Updated: 2018/11/06 07:31:50 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

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
