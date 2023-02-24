NAME = Tic-Tac-Toe

#------HEADER----
H_DIR 	=	include
H		=	$(H_DIR)/main.hpp
H		+=	$(H_DIR)/rendering.hpp

#------SRC-------
SRC_DIR	=	src
SRC		= $(SRC_DIR)/main.cpp

#------OBJ-------
OBJ		=	$(SRC:.cpp=.o)

#------FLAGS-----
#CC = g++
#CFLAGS = -wall -g
CC		=	c++
H_FLAGS	=	-I$(H_DIR)
C_FLAGS =	-std=c++98	-Wall -Wextra 

#----- IMPICIT RULES -----
$(addprefix $(SRC_DIR)/, %.o):	$(addprefix $(SRC_DIR)/, %.cpp) $(H)
	$(CC) $(H_FLAGS) $(C_FLAGS) -c $< -o $@

#------RULES-----
all: clean $(NAME)

$(NAME): $(OBJ)
	$(CC) $(H_FLAGS) $(OBJ) -o $@

clean:
	$(RM) -rf $(OBJ)

fclean: clean
	$(RM) -rf $(OBJ)
	$(RM) $(NAME)

re: fclean all


.PHONY: clean fclean re all