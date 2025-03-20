# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 18:50:00 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/20 19:19:10 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := battle

CC := c++

CFLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

SRCDIR := ./sources/

INCDIR := ./includes/

INC := -I $(INCDIR)

SRC_FILES := Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
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
	&& echo "\e[1;92m Battle arena ready, enjoy the show! \e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Tickets are sold out.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all