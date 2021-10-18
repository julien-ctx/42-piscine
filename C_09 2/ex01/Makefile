SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_swap.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_strcmp.c \

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all : $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar crs $@ $^

.c.o:
	gcc $(FLAGS) -c  $< -o $(<:.c=.o) -I includes

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
