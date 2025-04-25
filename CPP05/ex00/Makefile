# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 13:02:42 by mrahmat-          #+#    #+#              #
#    Updated: 2025/04/25 13:03:49 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Bureaucrat

CC			:= c++

CFLAGS		:= -Wall -Wextra -Werror

OBJDIR		:= ./objects/

INCDIR		:= ./includes/

SRCDIR		:= ./sources/

INC			:= -I $(INCDIR)

SRC_FILES	:= Bureaucrat.cpp \
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
	&& echo "\e[1;92m Bureaucrat program ready!\e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Something went terribly wrong.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all

.PHONY: all, clean, fclean, re