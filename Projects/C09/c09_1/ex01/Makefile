C_FLAGS = -c -Wall -Wextra -Werror

SRCS =  srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLS = includes/ft.h

OBJS = ${SRCS:.c=.o}

GCH = includes/ft.h.gch

CC = gcc

NAME = libft.a

RM = rm -f

.c.o:
			${CC} ${C_FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} ${INCLS}
			${CC} ${C_FLAGS} ${INCLS}
			ar -rcs ${NAME} srcs/*.o

clean:
			${RM} ${OBJS} ${GCH}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re