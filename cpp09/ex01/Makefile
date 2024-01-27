src = main.cpp RPN.cpp
O_files = $(src:.cpp=.o)
HEADERS = RPN.hpp 
CXXFLAGS = -Wall -Wextra -Werror  -fsanitize=address -g3 -std=c++98
CXX = c++
NAME = RPN

all: $(NAME)

$(NAME) : $(O_files)
	$(CXX)  $(CXXFLAGS) $(O_files) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX)  $(CXXFLAGS) -c $< -o $@

clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)