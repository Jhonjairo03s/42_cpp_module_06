# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/06 20:00:24 by jhvalenc          #+#    #+#              #
#    Updated: 2026/10/06 20:05:39 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = scalar_converter

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = ScalarConverter.cpp \
	      main.cpp

OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
