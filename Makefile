NAME_PUSH	= push_swap
NAME_CHECKER = checker

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror

PUSH_SRCS =	push_swap.c			\
			parsing.c	\
			libft_utils.c		\
			ft_split.c			\
			algorithm.c			\
			algorithm_utils.c	\
			a.c					\
			b.c					\
			both.c				\
			utils1.c			\
			utils2.c			\
			order.c

CHECKER_SRCS =	checker.c			\
				parsing.c			\
				libft_utils.c		\
				ft_split.c			\
				a.c					\
				b.c					\
				both.c				\
				order.c

PUSH_OBJS	= ${PUSH_SRCS:.c=.o}

CHECKER_OBJS	= ${CHECKER_SRCS:.c=.o}

%.o: %.c
			$(CC) ${CFLAGS} -g -c $< -o $@ 

all: 		checker push_swap

push_swap:  ${PUSH_OBJS}
			$(CC) ${CFLAGS} -o ${NAME_PUSH} ${PUSH_OBJS}

checker:  	${CHECKER_OBJS}
			$(CC) ${CFLAGS} ${CHECKER_OBJS} -o ${NAME_CHECKER}

clean:
			rm -f *.o

fclean: clean
			rm -f $(NAME_PUSH) $(NAME_CHECKER)

re: fclean all

.PHONY: all clean fclean re push_swap checker libft