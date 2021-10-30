NAME = Animal

SRCS		= main.cpp srcs/Animal.cpp  srcs/Dog.cpp srcs/Cat.cpp srcs/WrongAnimal.cpp srcs/WrongCat.cpp
HEADERS 	= headers/Animal.hpp headers/Dog.hpp headers/Cat.hpp headers/WrongAnimal.hpp headers/WrongCat.hpp
CC			= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ_DIR = ./objs
OBJS		= $(addprefix $(OBJ_DIR)/,$(SRCS:%.cpp=%.o))

RM			= rm -rf


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CPP_FLAGS) $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)


re: fclean all

test: all
	@clear
	@./${NAME}
.PHONY: all clean fclean re