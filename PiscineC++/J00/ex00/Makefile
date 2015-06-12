# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/10 15:30:58 by mbarbari          #+#    #+#              #
#    Updated: 2015/06/10 16:29:53 by mbarbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS += -Wall -Werror -Wextra

NAME = Megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

.PHONY: all

all: $(NAME)

%.o: %.cpp
	$(CXX) -c $(CPPFLAGS) $(CFLAGS) -o $@ $<

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS)
