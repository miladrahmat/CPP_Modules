# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 15:57:05 by mrahmat-          #+#    #+#              #
#    Updated: 2025/02/06 18:07:25 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := c++

FLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

SRCS := megaphone.cpp

OBJS := $(addprefix $(OBJDIR), $(SRCS:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects

$(OBJDIR)%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<
	
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME) \
	&& echo "\e[1;92m Megaphone ready for use! \e[0;37m" \
	|| echo "\e[1;31m Megaphone is broken, please contact the supplier. \e[0;37m"

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"
	
fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all

.PHONY: all, clean, fclean, re