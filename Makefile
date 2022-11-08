NAME = libft.a
SRC = *.c
OBJECTS = *.o
HEADERS = libft.h

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all