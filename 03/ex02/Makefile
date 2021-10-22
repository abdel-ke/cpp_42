NAME = FragTrap
CFLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS = 	main.cpp	\
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJ = $(SRCS:.cpp=.o)
all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm $(NAME)

re: fclean all