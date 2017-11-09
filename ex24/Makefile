# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballiot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 08:44:37 by lballiot          #+#    #+#              #
#    Updated: 2017/11/09 10:30:35 by lballiot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ./srcs/
HEADERS = ./includes/
OBJ = $(SRC :.c=.o)
all : $(NAME)

$(NAME) :
	$(CC) -c $(CFLAGS) $(SRC) $(HEADERS) -I .
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

