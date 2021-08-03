NAME = phonebook
CFLAGS = -Wall -Wextra -Werror

SRCS =	phonebook.cpp	\
		Contact.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm phonebook

re : fclean all
