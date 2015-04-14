CC = g++
CFLAGS = -Wall -Wextra -Werror
SRC = logger.cpp	\
	  main.cpp

OBJ = $(SRC:.c=.o)

NAME = LogMe

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: fclean all
