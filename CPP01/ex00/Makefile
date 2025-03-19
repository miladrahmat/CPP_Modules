# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 15:38:50 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/19 15:58:36 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie

CC := c++

CFLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

SRCDIR := ./sources/

INCDIR := ./includes/

INC := -I $(INCDIR)

SRC_FILES := Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp
SRCS := $(addprefix $(SRCDIR), $(SRC_FILES))

OBJS := $(addprefix $(OBJDIR), $(SRC_FILES:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
	
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME) \
	&& echo "\e[1;92m Zombie apocalypse simulator ready! \e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Zombie apocalypse cannot happen right now.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all