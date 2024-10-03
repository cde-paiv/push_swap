NAME	= push_swap

FLAGS	= -Wall -Werror -Wextra -g
CC		= cc $(FLAGS)

LIBFT	= libft/libft.a

SRCS	=
			check_error.c \
			init_stacks.c \

OBJS	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) -c $^

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(LIBFT) -o $(NAME)


$(LIBFT):
	cd libft && $(MAKE)

clean:
	rm -f $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re