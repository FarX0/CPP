SRC = *.cpp 
#da fiare attenzione a non usare *.* che non funziona in makefile
NAME = a.out
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all