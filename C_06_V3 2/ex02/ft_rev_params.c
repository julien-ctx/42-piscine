/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:54:51 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/18 17:27:52 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = argc - 1;
	while (i < argc - 1)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		i++;
		count --;
	}
}
