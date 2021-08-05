NAME = megaphone
MEGAPHONE = megaphone.cpp
CFLAGS= -Wall -Wextra -Werror

all:  $(NAME)

 $(NAME) : $(MEGAPHONE)
	@clang++ $(CFLAGS) $(MEGAPHONE) -o $(NAME)
	@echo "\033[32m--------- SUCCESSFUL ---------\033[0m"

fclean:
	@rm megaphone

re : fclean all
 
