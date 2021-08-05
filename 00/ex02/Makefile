NAME = account
CFLAGS = -Wall -Wextra -Werror

SRCS =	Account.cpp	\
		tests.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm account

re : fclean all
