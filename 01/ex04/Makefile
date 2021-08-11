NAME = replace
CFLAGS = #-Wall -Wextra -Werror

SRCS =	main.cpp	\

all: 
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

fclean:
	@rm *.replace
	@rm $(NAME)

re : fclean all  
