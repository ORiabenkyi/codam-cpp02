NAME = ex01
CC   = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = 	src/Fixed.cpp \
		src/main.cpp

HEADS =  include/Fixed.hpp		

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