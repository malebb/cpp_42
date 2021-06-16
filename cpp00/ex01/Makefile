# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 19:22:24 by mlebrun           #+#    #+#              #
#    Updated: 2021/06/16 19:22:27 by mlebrun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = phonebook.cpp Contact.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook
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
