C_FLAGS = -c -Wall -Wextra -Werror -g

SRCS =  srcs/itowrd.c srcs/main.c srcs/utils/ft_atoi.c srcs/utils/ft_io.c srcs/utils/ft_strcat.c srcs/utils/ft_trim.c

OBJS = ${SRCS:.c=.o}

CC = gcc

NAME = rush-02

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