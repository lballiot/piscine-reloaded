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
