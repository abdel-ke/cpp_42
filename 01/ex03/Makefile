NAME = weapon
CFLAGS = -Wall -Wextra -Werror

SRCS 	=	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp

SRCS_H	=	Weapon.hpp	\
			HumanA.hpp	\
			HumanB.hpp

OBJ_DIR = ./objs
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all:$(NAME)

$(NAME):$(OBJ)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"
$(OBJ): $(OBJ_DIR)/%.o: %.cpp $(SRCS_H)
	@mkdir -p $(OBJ_DIR)
	@clang++ -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm $(NAME)

re : fclean all