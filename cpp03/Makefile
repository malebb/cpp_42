# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 19:23:05 by mlebrun           #+#    #+#              #
#    Updated: 2021/12/15 10:18:42 by mlebrun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

DEP = ${SRCS:.cpp=.d}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clapTrap
RM	= rm -rf

.PHONY:		all
all:		${NAME}

$(NAME):	${OBJS}
			${CC} ${OBJS} -o ${NAME} 

-include ${DEP}

%.o:%.cpp Makefile
		${CC} -MMD -MP -o $@ -c $< ${CFLAGS}

.PHONY:		clean
clean:
			${RM} ${OBJS} ${DEP}

.PHONY:		fclean
fclean:		clean
			${RM} ${NAME}

.PHONY:		re
re:			fclean all
