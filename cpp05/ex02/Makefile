# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 15:25:57 by pgrellie          #+#    #+#              #
#    Updated: 2025/05/20 16:38:33 by pgrellie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 2828
COMP = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

SRCS = Bureaucrat.cpp\
		AForm.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreation.cpp\
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