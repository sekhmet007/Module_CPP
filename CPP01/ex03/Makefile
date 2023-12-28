# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 14:39:14 by ecullier          #+#    #+#              #
#    Updated: 2023/12/27 16:47:17 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Weapon

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fcl