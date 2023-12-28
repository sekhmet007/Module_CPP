# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 13:57:09 by ecullier          #+#    #+#              #
#    Updated: 2023/12/27 16:43:22 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zombie

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=Zombie.cpp  zombieHorde.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) &(OBJ)

re: fclean all

.PHONY: all clean fcl