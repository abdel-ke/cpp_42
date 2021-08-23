NAME = claptrap
CFLAGS = -Wall -Wextra -Werror

SRCS =	ClapTrap.cpp	\
		main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean:clean
	@rm $(NAME)

re: fclean all
