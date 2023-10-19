# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 12:59:35 by zsyyida           #+#    #+#              #
#    Updated: 2023/10/19 13:03:21 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = trap


CXX = c++
RM	= rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
#-fsanitize=address

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re .cpp.o
