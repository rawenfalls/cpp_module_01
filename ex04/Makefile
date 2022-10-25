NAME = replace

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
RMR = rm -rf

PREF_SRC = ./src/
PREF_OBJ = ./obj/


SRCS = $(wildcard $(PREF_SRC)*.cpp)
OBJS = $(SRCS:$(PREF_SRC)%.cpp=$(PREF_OBJ)%.o)
mk = mkdir -p

all: $(NAME)
		@echo "Make done"

$(NAME): $(shell $(mk) obj) $(OBJS)
		$(CC) $(CLFAGS) $(OBJS) -o $(NAME)

$(PREF_OBJ)%.o: $(PREF_SRC)%.cpp 
		$(CC) $(CLFAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
		@echo "Make clean done"

fclean: clean
		$(RM) $(NAME)
		$(RMR) obj
		@echo "Make fclean done"

re: fclean all

.PHONY :	all clean fclean re norm
