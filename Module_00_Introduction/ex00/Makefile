# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jelvan-d <jelvan-d@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 07:53:35 by jelvan-d      #+#    #+#                  #
#    Updated: 2020/08/29 11:40:11 by jelvan-d      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone

CPPFILES	=	$(SRCS:%=%.cpp)

FLAGS		=	-Wall -Wextra -Werror -pedantic-errors -std=c++98

all:		$(NAME)

$(NAME):
	@clang++ $(FLAGS) $(CPPFILES) $^ -o $(NAME)

clean:
	@echo "Cleaning..."

fclean:	clean
	@echo "Extra cleaning..."
	@rm -f $(NAME)

re:		fclean all
