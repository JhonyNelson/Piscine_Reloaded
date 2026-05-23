# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 16:35:54 by jhcosta-          #+#    #+#              #
#    Updated: 2026/05/23 16:35:55 by jhcosta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME).o

fclean: clean
	rm -f $(NAME)

re: flcean all

.PHONY: all clean fclean re
