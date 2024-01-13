src = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp  ShrubberyCreationForm.cpp\
      	RobotomyRequestForm.cpp Intern.cpp
O_files = $(src:.cpp=.o)
HEADERS = AForm.hpp Intern.hpp PresidentialPardonForm.hpp  ShrubberyCreationForm.hpp\
		Bureaucrat.hpp RobotomyRequestForm.hpp
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98
CXX = c++
NAME = Bureaucrat

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX)  $(CXXFLAGS) -c $< -o $@

$(NAME) : $(O_files)
	$(CXX)  $(CXXFLAGS) $(O_files) -o $(NAME)

clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
