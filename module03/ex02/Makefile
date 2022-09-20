
NAME = fragtrap
CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_PATH = ./objs/
OBJS = $(patsubst %.cpp,$(OBJ_PATH)%.o,$(SRCS))

all:$(NAME)

# Linking
$(NAME): $(OBJ_PATH) $(OBJS)
	@echo "\033[1;32m$(NAME)\033[1;0m\033[3;32m linking...\033[0m"
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;34m$(NAME)\033[1;0m\033[3;34m created.\033[0m"

# Compaling
$(OBJ_PATH)%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@
	@echo "\033[1;33m$(NAME)\033[1;0m\033[3;33m compiling...\033[0m"

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[2;35mObjects Files \033[1;31m$(OBJS_LIST)\033[0m\033[2;35mremoved.\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[2;35m$(NAME)\033[1;0m\033[2;35m removed.\033[0m"

re: fclean all