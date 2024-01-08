# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 09:14:06 by ecullier          #+#    #+#              #
#    Updated: 2023/12/28 09:03:05 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Fixed

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=Fixed.cpp main.cpp OperatorBool.cpp Operator.cpp OperatorCompar.cpp\
Point.cpp bsp.cpp

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