SRCS = add.c \
	   diff.c \
	   div.c \
	   ft_atoi.c \
	   ft_putnbr.c \
	   main.c \
	   mod.c \
	   mult.c \

OBJS = $(SRCS:.c=.o)

NAME = do-op

all : $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -Werror -Wextra -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
