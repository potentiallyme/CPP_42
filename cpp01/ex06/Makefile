SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = harlFilter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
