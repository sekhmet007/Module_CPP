# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 21:36:03 by ecullier          #+#    #+#              #
#    Updated: 2023/12/26 21:50:14 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Fixed

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=Fixed.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ) $(NAME)
fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fcl