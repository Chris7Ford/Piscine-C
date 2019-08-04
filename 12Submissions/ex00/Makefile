# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chford <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 16:30:22 by chford            #+#    #+#              #
#    Updated: 2018/11/07 16:35:44 by chford           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

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
