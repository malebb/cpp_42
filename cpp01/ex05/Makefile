# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 19:23:05 by mlebrun           #+#    #+#              #
#    Updated: 2021/07/05 12:07:39 by mlebrun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Karen.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = karen
RM	= rm -rf

all:		${NAME}

$(NAME):	${OBJS}
			${CC} ${OBJS} -o ${NAME} 

%.o:%.cpp
		${CC} -o $@ -c $< ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
