NAME = replace
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	main.cpp	\

all: 
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

fclean:
	@rm $(NAME)
	@rm *.replace

re : fclean all  
