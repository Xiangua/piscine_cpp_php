# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folier <folier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 10:31:27 by folier            #+#    #+#              #
#    Updated: 2015/01/05 14:38:39 by folier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAG = -Wall -Werror -Wextra

SOURCE = megaphone.cpp

all: $(SOURCE)
	g++ $(FLAG) -o $(NAME) $(SOURCE)

fclean:
	@rm -rf $(NAME)
	
re:fclean all
