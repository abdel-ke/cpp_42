NAME = karen
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = 	main.cpp	\
		Karen.cpp
all : $(NAME)

$(NAME) : Karen.cpp main.cpp Karen.hpp
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

fclean:
	@rm $(NAME)

re: fclean all