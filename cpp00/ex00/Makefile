SRCS	=	./megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

NAME	=	megaphone

cc		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJS)
	$(cc) $(FLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 