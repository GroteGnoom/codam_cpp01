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

test: test1 test2 test3 test4 test5

test1: $(NAME)
	./$(NAME) main.cpp a b
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight
	rm main.cpp.replace

test2: all
	./$(NAME) main.cpp ai bla
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight
	rm main.cpp.replace

test3:
	./$(NAME) main.cpp a ""
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight
	rm main.cpp.replace

test4:
	./$(NAME) main.cpp "" bla || true

test5:
	./$(NAME) main.cpp a aa
	diff -u main.cpp main.cpp.replace | ~/opt/git/share/git-core/contrib/diff-highlight/diff-highlight
	rm main.cpp.replace

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re test test1 test2 test3 test4 test5
