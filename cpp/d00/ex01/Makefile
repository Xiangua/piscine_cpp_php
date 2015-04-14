# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folier <folier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 14:57:11 by folier            #+#    #+#              #
#    Updated: 2015/01/06 08:26:21 by folier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

SRC = Book.class.cpp \
	  main.cpp

FLAG = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

CC = g++

all: $(NAME)

$(NAME): 
	$(CC) -o $(NAME) $(FLAG) $(SRC)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re:fclean all
