# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 20:06:19 by sreinhol          #+#    #+#              #
#    Updated: 2022/09/03 23:29:44 by sreinhol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = identify

SRC = main.cpp Base.cpp
HEADERS := Base.hpp

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