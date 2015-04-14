CC = g++
CFLAGS = -Wall -Wextra -Werror

SRC = Brain.cpp	\
	  Human.cpp \
	  main.cpp

OBJ = $(SRC:.c=.o)

NAME = brain

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: fclean all
