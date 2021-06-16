# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 19:23:05 by mlebrun           #+#    #+#              #
#    Updated: 2021/06/16 19:23:07 by mlebrun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone
RM	= rm -rf

all:		${NAME}

$(NAME):	${OBJS}

%.o:%.cpp
		${CC} -o $@ -c $< ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
