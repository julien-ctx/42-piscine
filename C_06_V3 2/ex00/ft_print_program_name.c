/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:23:56 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/19 15:32:06 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*program_name;

	program_name = argv[0];
	i = 0;
	(void)argc;
	while (program_name[i])
	{
		write(1, &program_name[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
