CC = g++
CFLAGS = -Wall -Wextra -Werror
SRC = Zombie.cpp	\
	  ZombieEvent.cpp \
	  ZombieHorde.cpp \
	  main.cpp

OBJ = $(SRC:.c=.o)

NAME = zombieFactory

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: fclean all
