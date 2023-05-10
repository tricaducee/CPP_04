NAME = materia
SRC = main.cpp\
	  AMateria.cpp\
	  Ice.cpp\
	  Cure.cpp\
	  Character.cpp\
	  MateriaSource.cpp
	  

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

ifeq ($(DEBUG), 1)
	CXXFLAGS += -fsanitize=address -g3
endif

CC = g++
RM = rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re