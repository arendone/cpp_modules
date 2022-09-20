# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 19:32:39 by sreinhol          #+#    #+#              #
#    Updated: 2022/09/03 19:36:06 by sreinhol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = serialize

SRC = main.cpp Serialize.cpp
HEADERS := Serialize.hpp

GREEN := \033[0;32m
YELLOW := \033[1;33m

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) created$(DEFAULT)"

clean:
	@rm -f $(NAME)
	@echo "\n$(YELLOW)All cleaned!$(DEFAULT)"

re: clean all