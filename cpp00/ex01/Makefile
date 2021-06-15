SRCS = phonebook.cpp contact.cpp

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
