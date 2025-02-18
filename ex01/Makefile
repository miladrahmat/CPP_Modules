# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 15:06:22 by mrahmat-          #+#    #+#              #
#    Updated: 2025/02/18 14:57:05 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

CC := c++

CFLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

INC_DIR := ./includes/

SRC_DIR := ./sources/

INC := -I $(INC_DIR)

SRC_FILES := main.cpp \
		phonebook.cpp \
		contact.cpp \
		utils.cpp

SRCS := $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJS := $(addprefix $(OBJDIR), $(SRC_FILES:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects
	
$(OBJDIR)%.o: $(SRC_DIR)%.cpp
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME) \
	&& echo "\e[1;92m The awesome phonebook is ready! \e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m We are out of yellow papers.. Try again later."
	
clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all

.PHONY: all, clean, fclean, re