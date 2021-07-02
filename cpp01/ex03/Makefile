# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 19:23:05 by mlebrun           #+#    #+#              #
#    Updated: 2021/07/02 13:38:49 by mlebrun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = unnecessary_violence
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
