NAME = ft_sed
SRC = main.cpp

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98
else
	CC=c++
	FLAGS = -Wall -Wextra -Werror
endif

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

test: test1 test2

test1:
	./ft_sed main.cpp a b
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight

test2:
	./ft_sed main.cpp ai bla
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re test test1 test2
