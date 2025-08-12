# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 18:40:45 by mrahmat-          #+#    #+#              #
#    Updated: 2025/08/12 16:51:40 by mrahmat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		:= \e[1;92m
RED			:= \e[1;31m
CYAN		:= \e[1;36m
RESET		:= \e[0m

NAME		:= PmergeMe

CC			:= c++

CFLAGS		:= -Wall -Wextra -Werror -MMD

OBJDIR		:= ./objects_and_dependencies/

INCDIR		:= ./includes/

SRCDIR		:= ./sources/

INC			:= -I $(INCDIR)

SRC_FILES	:= PmergeMe.cpp \
				main.cpp

SRCS		:= $(addprefix $(SRCDIR), $(SRC_FILES))

OBJS		:= $(addprefix $(OBJDIR), $(SRC_FILES:.cpp=.o))

DEPS		:= $(OBJS:.o=.d)

all: $(OBJDIR) $(NAME)

-include $(DEPS)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME) \
	&& echo "$(GREEN) Ready to sort some numbers!$(RESET)" \
	|| echo "$(RED) ERROR:$(RESET) Something went terribly wrong.. Try again later."

debug: fclean
	@$(MAKE) CFLAGS="$(CFLAGS) -D DEBUG=1 -g" > /dev/null \
	&& echo "$(GREEN) Ready to sort some numbers with debugging prints!$(RESET)" \
	|| echo "$(RED) ERROR:$(RESET) Something went terribly wrong.. Try again later."

clean:
	@rm -fr $(OBJDIR) && echo "$(CYAN) Removed all object files 🧹 $(RESET)"

fclean: clean
	@rm -fr $(NAME) && echo "$(CYAN) Removed all executables 🧹 $(RESET)"

re: fclean all

.PHONY: all, clean, fclean, re