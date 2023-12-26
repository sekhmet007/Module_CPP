# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 20:07:14 by ecullier          #+#    #+#              #
#    Updated: 2023/12/25 18:04:59 by ecullier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PhoneBook

CC=g++
CFLAGS=-Wall -Wextra -Werror -g -std=c++98

SRC=Contact.cpp PhoneBook.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean