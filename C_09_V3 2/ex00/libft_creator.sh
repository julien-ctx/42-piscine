#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar crs libft.a *.o
