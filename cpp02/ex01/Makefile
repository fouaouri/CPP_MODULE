src = main.cpp Fixed.cpp
O_files = $(src:.cpp=.o)
CXXFLAGS = 
CXX = c++
NAME = Fixed

all: $(NAME)

$(NAME) : $(O_files)
	c++  $(CXXFLAGS) $(O_files) -o $(NAME)
clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)