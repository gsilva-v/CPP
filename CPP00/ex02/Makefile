NAME = accounts
CC = g++

CFLAGS = -std=c++98 -g -Wall -Werror -Wextra -Wall -Wextra -Werror

SRC = ./Account.cpp \
		./tests.cpp \

OBJS =  $(SRC:%.cpp=%.o)

all:	${NAME}

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

${NAME}:	${OBJS}
	echo ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:		
	@rm -rf ${OBJS}

fclean:		clean
	@rm -rf ${NAME}

re:			fclean all