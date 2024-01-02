src = main.cpp Bureaucrat.cpp Form.cpp
O_files = $(src:.cpp=.o)
HEADERS = Form.hpp Bureaucrat.hpp 
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98
CXX = c++
NAME = Bureaucrat

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