# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 14:44:50 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/19 14:53:06 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := account

CC := c++

CFLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

SRCS := Account.cpp \
	tests.cpp

OBJS := $(addprefix $(OBJDIR), $(SRCS:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects

$(OBJDIR)%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all

.PHONY: all, clean, fclean, re