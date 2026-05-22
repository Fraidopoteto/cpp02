C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g
INFILES = 	main.cpp\
			Fixed.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = ex01

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
