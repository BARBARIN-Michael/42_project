# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/10 15:30:58 by mbarbari          #+#    #+#              #
#    Updated: 2015/06/11 22:39:29 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#CXX = clang++

CFLAGS += -Wall -Werror -Wextra

NAME = Phonebook

SRCS = Contact.cpp \
	   Phonebook.cpp \
	   main.cpp

OBJS = $(SRCS:%.cpp=%.o)

.PHONY: all

all: $(NAME)

%.o: %.cpp
	$(CXX) -c $(CPPFLAGS) $(CFLAGS) -I. -o $@ $<

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS)
