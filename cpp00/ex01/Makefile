SRCS	=	Phonebook.cpp Contact.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)

NAME	=	phonebook

CXX		=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 