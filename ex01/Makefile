# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 13:11:12 by caunhach          #+#    #+#              #
#    Updated: 2023/11/18 13:11:16 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp PhoneBook.cpp Contact.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
