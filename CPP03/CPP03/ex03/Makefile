# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:42:51 by ecullier          #+#    #+#              #
#    Updated: 2024/01/10 09:30:52 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=DiamondTrap

CC=c++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98 -Wshadow

SRC=ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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

#-Wshadow : permet de voirs si une variable et cache par une autre.
#class Exemple {
#private:
#   int valeur;

#public:
#    void setValeur(int valeur) {
#        // Ici, 'valeur' (paramètre) cache 'valeur' (variable membre)
#        this->valeur = valeur;  // Sans 'this->', il y aurait ambiguïté
#    }
#};