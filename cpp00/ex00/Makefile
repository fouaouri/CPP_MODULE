src = megaphone.cpp

O_files = $(src:.c=.o)
CFLAGS = -Wall -Wextra -Werror

NAME = megaphone

$(NAME) : $(O_files)
	c++  $(CFLAGS) $(O_files) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean : 
	rm -rf $(O_files) $(bonus_O)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)