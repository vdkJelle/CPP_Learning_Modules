# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jelvan-d <jelvan-d@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/26 09:09:23 by jelvan-d      #+#    #+#                  #
#    Updated: 2020/09/27 10:43:52 by jelvan-d      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME		=	base

SRCS		=	main\
				Base

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
