NAME = ref
SRC = main.cpp
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all:
	@clang++ $(CFLAGS) $(SRC) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

fclean: 
	@rm $(NAME)

re: fclean all