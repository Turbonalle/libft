NAME = libft.a
SRC = *.c #FIX THIS!!!
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c
OBJECTS = *.o #FIX THIS!!!
B_OBJECTS = #FIX THIS!!!
HEADERS = libft.h

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

bonus: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC) $(BONUS)
	ar rc $(NAME) $(OBJECTS) $(B_OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all