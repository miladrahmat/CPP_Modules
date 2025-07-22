# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 18:40:45 by mrahmat-          #+#    #+#              #
#    Updated: 2025/07/22 14:31:02 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= RPN

CC			:= c++

CFLAGS		:= -Wall -Wextra -Werror

OBJDIR		:= ./objects/

INCDIR		:= ./includes/

SRCDIR		:= ./sources/

INC			:= -I $(INCDIR)

SRC_FILES	:= RPN.cpp \
				main.cpp

SRCS		:= $(addprefix $(SRCDIR), $(SRC_FILES))

OBJS		:= $(addprefix $(OBJDIR), $(SRC_FILES:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME) \
	&& echo "\e[1;92m Reverse Polish Notation calculator ready!\e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Something went terribly wrong.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all

.PHONY: all, clean, fclean, re