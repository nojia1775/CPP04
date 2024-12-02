CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	AMateria.cpp \
	Cure.cpp \
	Ice.cpp
	ICharacter.cpp

OBJ_DIR = obj

OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))

NAME = interface

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re