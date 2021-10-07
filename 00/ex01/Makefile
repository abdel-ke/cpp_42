NAME = phonebook
CFLAGS = -Wall -Wextra -Werror

SRCS =	Phonebook.cpp	\
		Contact.cpp

HEADERS =	Contact.hpp	\
			Phonebook.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm phonebook

re : fclean all
