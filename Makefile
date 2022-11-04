NAME = libft.a
SRC = ./sources/*.c
OBJECTS = *.o
HEADERS = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all