# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 20:22:17 by ecullier          #+#    #+#              #
#    Updated: 2023/12/26 20:54:46 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=harlFilter

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=Harl.cpp main.cpp

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