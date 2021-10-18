/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:47:31 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 18:03:56 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		add(int n1, int n2);
int		diff(int n1, int n2);
int		mult(int n1, int n2);
int		div(int n1, int n2);
int		mod(int n1, int n2);

int		ft_atoi(char *str);

int	main(int ac, char **av)
{
	int	(*math[5])(int, int);

	math[0] = add;
	math[1] = diff;
	math[2] = mult;
	math[3] = div;
	math[4] = mod;
	if (ac != 4)
		return (1);
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*'
		&& av[2][0] != '/' && av[2][0] != '%') || av[2][1] != '\0')
		write(1, "0\n", 2);
	if (av[2][0] == '+')
		math[0]((ft_atoi(av[1])), (ft_atoi(av[3])));
	if (av[2][0] == '-')
		math[1]((ft_atoi(av[1])), (ft_atoi(av[3])));
	if (av[2][0] == '*')
		math[2]((ft_atoi(av[1])), (ft_atoi(av[3])));
	if (av[2][0] == '/')
		math[3]((ft_atoi(av[1])), (ft_atoi(av[3])));
	if (av[2][0] == '%')
		math[4]((ft_atoi(av[1])), (ft_atoi(av[3])));
	return (0);
}
