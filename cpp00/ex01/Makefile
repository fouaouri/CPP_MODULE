src = main.cpp

O_files = $(src:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook



all: $(NAME)

$(NAME) : $(O_files)
	c++  $(CFLAGS) $(O_files) -o $(NAME)
clean : 
	rm -rf $(O_files)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
