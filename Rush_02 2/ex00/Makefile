# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 16:00:15 by jcauchet          #+#    #+#              #
#    Updated: 2021/09/26 23:11:01 by jcauchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = custom_atoi.c \
	   ft_split.c \
	   ft_error.c \
	   main.c \
	   ft_initializer.c \
	   ft_string.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_last_word.c \
	   ft_strstr.c \
	   ft_itoa.c \

OBJS = $(SRCS:.c=.o)

NAME = rush-02

all : $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -Werror -Wextra -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
