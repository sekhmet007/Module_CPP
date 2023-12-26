# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 15:21:47 by ecullier          #+#    #+#              #
#    Updated: 2023/12/26 15:41:38 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=main

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC= main.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fcl