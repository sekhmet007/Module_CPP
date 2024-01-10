# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:42:51 by ecullier          #+#    #+#              #
#    Updated: 2024/01/09 07:41:15 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=FragTrap

CC=c++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

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