# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 15:25:57 by pgrellie          #+#    #+#              #
#    Updated: 2025/04/20 22:46:59 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Inspi
COMP = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

SRCS = Animal.cpp\
		Brain.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\
		main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%o: %cpp
	$(COMP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re