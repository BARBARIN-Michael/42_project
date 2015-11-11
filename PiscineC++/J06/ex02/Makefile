# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/24 18:12:55 by mbarbari          #+#    #+#              #
#    Updated: 2015/06/24 18:14:26 by mbarbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= exec
SRC		=	main.cpp

OBJ			= $(SRC:.cpp=.o)
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror

# **************************************************************************** #
.PHONY: $(NAME) all clean fclean re

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
