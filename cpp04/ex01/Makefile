src = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp Brain.cpp
O_files = $(src:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98
CXX = c++
NAME = Animal

all: $(NAME)

$(NAME) : $(O_files)
	c++  $(CXXFLAGS) $(O_files) -o $(NAME)
clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)