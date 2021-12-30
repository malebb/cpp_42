SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

DEP = ${SRCS:.cpp=.d}

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia
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
