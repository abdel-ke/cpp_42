NAME = Bureaucrat

SRCS		= Bureaucrat.cpp main.cpp
HEADERS 	= Bureaucrat.hpp
CC			= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:%.cpp=%.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPP_FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean all
