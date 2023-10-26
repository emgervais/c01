NAME	= zomb
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all