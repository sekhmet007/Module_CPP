# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 15:08:11 by ecullier          #+#    #+#              #
#    Updated: 2024/01/17 21:05:54 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=btc

CC=c++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98 -Wshadow

SRC=$(wildcard *.cpp)

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