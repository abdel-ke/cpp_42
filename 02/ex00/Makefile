NAME = fixed
CFLAGS = -Wall -Wextra -Werror

SRCS = 	main.cpp	\
		Fixed.cpp

OBJ = $(SRCS:.cpp=.o)
all : $(NAME)

$(NAME) : $(OBJ) Fixed.hpp
	@clang++ $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm $(NAME)

re: fclean all