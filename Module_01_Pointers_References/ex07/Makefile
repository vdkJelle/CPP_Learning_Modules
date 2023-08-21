# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jelvan-d <jelvan-d@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/04 12:31:54 by jelvan-d      #+#    #+#                  #
#    Updated: 2020/08/29 22:54:07 by jelvan-d      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	replace

SRCS		=	sed

CPPFILES	=	$(SRCS:%=%.cpp)

FLAGS		=	-Wall -Wextra -Werror -pedantic-errors -std=c++98

all:		$(NAME)

$(NAME): $(CPPFILES)
	@clang++ $(FLAGS) $(CPPFILES) -o $(NAME)

clean:
	@echo "Cleaning..."

fclean:	clean
	@echo "Extra cleaning..."
	@rm -f $(NAME)

re:		fclean all
