NAME = ex00
CC   = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = 	src/newZombie.cpp \
		src/randomChump.cpp \
		src/Zombie.cpp  \
		src/main.cpp

HEADS =  include/Zombie.hpp		

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CCFLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re