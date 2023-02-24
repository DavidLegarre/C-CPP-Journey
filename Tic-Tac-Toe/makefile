NAME = Tic-Tac-Toe

#------HEADER----
H_DIR = include
H= $(wildcard $(H_DIR)/*.hpp)
#------SRC-------
SRC_DIR	=	src
SRC		= $(wildcard $(SRC_DIR)/*.cpp)

#------OBJ-------
OBJ		=	$(SRC:.cpp=.o)

#------FLAGS-----
CC		=	g++
C_FLAGS =	-Wall -Wextra -pedantic -I$(H_DIR)

#------RULES-----
$(NAME): $(OBJ)
	$(CC)	$(C_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(H)
	$(CC) $(C_FLAGS) -c $< -o $@


.PHONY: clean 

clean:
	$(RM) -rf $(OBJ)