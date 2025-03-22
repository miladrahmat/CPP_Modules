# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/22 20:47:31 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/22 20:57:27 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ClapTrap

CC			:= c++

CFLAGS		:= -Wall -Wextra -Werror

OBJDIR		:= ./objects/

SRCDIR		:= ./sources/

INCDIR		:= ./includes/

INC			:= -I $(INCDIR)

SRC_FILES	:= ClapTrap.cpp \
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
	&& echo "\e[1;92m ClapTrap ready!\e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Something went terribly wrong.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all