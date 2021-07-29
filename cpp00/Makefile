NAME = megaphone
MEGAPHONE = megaphone.cpp
CFLAGS= -Wall -Wextra -Werror

all:  $(NAME)

 $(NAME) : $(MEGAPHONE)
	@clang++ $(CFLAGS) $(MEGAPHONE) -o $(NAME)
	@echo "\n\033[32m--------- SUCCESSFUL ---------\033[0m"

clean:
	@rm megaphone

re : clean all
