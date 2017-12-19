# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballiot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/19 10:13:13 by lballiot          #+#    #+#              #
#    Updated: 2017/12/19 10:13:18 by lballiot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ./ft_display_file.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :  $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)
