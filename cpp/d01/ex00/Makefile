CC = g++
CFLAGS = -Wall -Wextra -Werror
SRC = Pony.cpp	\
	  main.cpp

OBJ = $(SRC:.c=.o)

NAME = myLittlePony

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: fclean all
