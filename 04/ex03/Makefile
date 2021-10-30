NAME = Materia

SRCS		=	main.cpp				\
				srcs/AMateria.cpp		\
				srcs/Character.cpp		\
				srcs/Cure.cpp			\
				srcs/Ice.cpp			\
				srcs/MateriaSource.cpp	

HEADERS 	=	headers/AMateria.hpp		\
				headers/ICharacter.hpp		\
				headers/Character.hpp		\
				headers/Cure.hpp			\
				headers/Ice.hpp				\
				headers/IMateriaSource.hpp	\
				headers/MateriaSource.hpp	

CC			=	clang++

CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ_DIR		= ./objs
# OBJS		=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


%.o: %.cpp $(HEADERS)
$(OBJS): $(OBJ_DIR)/%.o : %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CPP_FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@clear
	@./${NAME}
.PHONY: all clean fclean re
