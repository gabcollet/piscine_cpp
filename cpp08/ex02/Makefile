# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 19:26:28 by gcollet           #+#    #+#              #
#    Updated: 2022/02/17 09:35:50 by gcollet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= ex02

OBJPATH = obj/

SRCS 	= main.cpp
OBJFILES = $(SRCS:.cpp=.o)
OBJS 	= $(addprefix $(OBJPATH), $(OBJFILES)) 
VPATH   = ./

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -Wshadow -Wno-conversion -std=c++98 -g3

all:	$(OBJPATH) ${PROG}

${PROG}:	${OBJS}
					@$(CC) ${OBJS} -o ${PROG}
					@echo "\n\033[32m\033[1mCompiled!\n\033[0m"

${OBJPATH}%.o:%.cpp
					@${CC} ${CFLAGS} -o $@ -c $<

clean:
					@rm -f ${OBJS}

fclean: 	clean
					@rm -rf ${OBJPATH}
					@rm -f ${PROG}

re:			fclean all

$(OBJPATH):
			@mkdir -p $(OBJPATH);

.PHONY: all clean fclean re