/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:38:27 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:23:52 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "main_header.h"

int	main(int argc, char **argv)
{
	if ((argc != 2 && argc != 3))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		if (ft_error(argv[1]))
			return (1);
		if (!ft_find_string(line_array("numbers.dict"), ft_itoa(custom_atoi(argv[1]))))
			write(1, "Dict Error\n", 11);
	}
	else if (argc == 3)
	{
		if (ft_error(argv[2]))
			return (1);
		if (!ft_find_string(line_array(argv[1]), ft_itoa(custom_atoi(argv[2]))))
			write(1, "Dict Error\n", 11);
	}
}
