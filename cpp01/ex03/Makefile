# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 15:43:41 by gcollet           #+#    #+#              #
#    Updated: 2022/01/27 13:44:21 by gcollet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= ex03

OBJPATH = obj/

SRCS 	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJFILES = $(SRCS:.cpp=.o)
OBJS 	= $(addprefix $(OBJPATH), $(OBJFILES)) 
VPATH   = ./

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

all:	$(OBJPATH) ${PROG}

${PROG}:	${OBJS}
					@$(CC) ${OBJS} -o ${PROG}
					@echo "\n\033[32m\033[1mCompiled!\n\033[0m"

${OBJPATH}%.o:%.cpp
					@gcc ${CFLAGS} ${HEADER} -o $@ -c $<

clean:
					@rm -f ${OBJS}

fclean: 	clean
					@rm -rf ${OBJPATH}
					@rm -f ${PROG}

re:			fclean all

$(OBJPATH):
			@mkdir -p $(OBJPATH);

.PHONY: all clean fclean re