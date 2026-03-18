NAME = ex01
CC   = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = 	src/Fixed.cpp \
		src/Point.cpp \
		src/bsp.cpp \
		src/main.cpp

HEADS =  inc/Fixed.hpp
HEADS += inc/Point.hpp
	

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