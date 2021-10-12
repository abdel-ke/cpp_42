NAME = zombie
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	main.cpp		\
		newZombie.cpp	\
		randomChump.cpp	\
		Zombie.cpp

OBJ_DIR = ./objs
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

$(OBJ): $(OBJ_DIR)/%.o: %.cpp Zombie.hpp
	@mkdir -p $(dir $@)
	@clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm $(NAME)

re: fclean  all