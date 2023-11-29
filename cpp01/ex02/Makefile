src = main.cpp
O_files = $(src:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
NAME = Brain

all: $(NAME)

$(NAME) : $(O_files)
	c++  $(CXXFLAGS) $(O_files) -o $(NAME)
clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)