CC = g++
CFLAGS = -Wall -Wextra -Werror

SRC = Weapon.cpp	\
	  HumanA.cpp	\
	  HumanB.cpp	\
	  main.cpp

OBJ = $(SRC:.c=.o)

NAME = weapon

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: fclean all
