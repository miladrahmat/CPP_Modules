# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 17:56:04 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/20 17:57:38 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := brain

CC := c++

CFLAGS := -Wall -Wextra -Werror

OBJDIR := ./objects/

SRCS :=  main.cpp

OBJS := $(addprefix $(OBJDIR), $(SRCS:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p objects

$(OBJDIR)%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) \
	&& echo "\e[1;92m Brain is braining \e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Brain is not braining right now.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all