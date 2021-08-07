NAME = zombie
CFLAGS = -Wall -Werror -Werror

SRCS =	main.cpp		\
		Zombie.cpp		\
		ZombieHorde.cpp

OBJ_DIR = ./objs
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

$(OBJ): $(OBJ_DIR)/%.o: %.cpp Zombie.hpp
	@mkdir -p $(OBJ_DIR)
	@clang++ -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm $(NAME)

re : fclean all