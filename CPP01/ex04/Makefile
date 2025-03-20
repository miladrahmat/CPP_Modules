# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 20:45:59 by mrahmat-          #+#    #+#              #
#    Updated: 2025/03/20 22:36:36 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := sed

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
	&& echo "\e[1;92m Sed program ready \e[0;37m" \
	|| echo "\e[1;31m ERROR:\e[0;37m Something went terribly wrong.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "\e[1;96m Removed all object files 🧹 \e[0;37m"

fclean: clean
	@rm -fr $(NAME) && echo "\e[1;96m Removed all executables 🧹 \e[0;37m"

re: fclean all