NAME = libmx.a

SRC = src

OBJ = obj

INC = inc

FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
		@clang $(FLAGS) -I $(INC) -c $(SRC)/*.c
		@mkdir -p $(OBJ)
		@cp *.o $(OBJ)
		@ar -rc $(NAME) $(OBJ)/*.o
		@ranlib $(NAME)
		@rm -rf *.o

uninstall: clean
		@rm -rf $(NAME)

clean:
		@rm -rf $(OBJ)

reinstall: all