# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 15:25:57 by pgrellie          #+#    #+#              #
#    Updated: 2025/04/08 21:51:23 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
COMP = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

SRCS = ClapTrap.cpp\
		main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%o: %cpp
	$(NAME) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re