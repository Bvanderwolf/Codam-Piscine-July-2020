C_FLAGS = -c -Wall -Wextra -Werror -g

A_FLAGS = -c -Wall -Wextra -Werror -g -fsanitize=address

SRCS =  ${wildcard srcs/*.c}

OBJS = ${SRCS:.c=.o}

CC = gcc

NAME = bsq

RM = rm -f

.c.o:
			${CC} ${C_FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS} ${GCH}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re