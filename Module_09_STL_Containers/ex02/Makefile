# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jelvan-d <jelvan-d@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/27 14:30:01 by jelvan-d      #+#    #+#                  #
#    Updated: 2023/08/21 15:14:06 by jelvan-d      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	PmergeMe

SRCS		=	main \
				PmergeMe

CPPFILES	=	$(SRCS:%=%.cpp)
OFILES		=	$(SRCS:%=%.o)

INCLUDES	=	.

FLAGS		=	-Wall -Wextra -Werror -pedantic-errors -std=c++98 -g -fsanitize=address

all:		$(NAME)

$(NAME): $(OFILES)
	@g++ $(FLAGS) $^ -I $(INCLUDES) -o $(NAME)

%.o : %.cpp
	@g++ -o $@ $(FLAGS) -I $(INCLUDES) -c $^

clean:
	@echo "Cleaning..."
	@rm -f $(OFILES)

fclean:	clean
	@echo "Extra cleaning..."
	@rm -f $(NAME)

re:		fclean all
