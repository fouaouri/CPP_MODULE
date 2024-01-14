<<<<<<< HEAD
src = main.cpp
O_files = $(src:.cpp=.o)
HEADERS = Bureaucrat.hpp
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98
CXX = c++
NAME = raw

all: $(NAME)

$(NAME) : $(O_files)
	$(CXX)  $(CXXFLAGS) $(O_files) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX)  $(CXXFLAGS) -c $< -o $@

clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

=======
src = cast.cpp
O_files = $(src:.cpp=.o)
HEADERS = cast.hpp
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98
CXX = c++
NAME = Serialization

all: $(NAME)

$(NAME) : $(O_files)
	$(CXX)  $(CXXFLAGS) $(O_files) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX)  $(CXXFLAGS) -c $< -o $@

clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

>>>>>>> 52297049e7358b69f881e2bdd35bcdfef4d385a5
re : fclean $(NAME)