# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 17:12:03 by ecullier          #+#    #+#              #
#    Updated: 2024/01/10 12:12:12 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=interface

CC=c++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98 -Wshadow

SRC=Animal.cpp main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp\
Character.cpp MateriaSource.cpp AMateria.cpp Ice.cpp Cure.cpp

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
