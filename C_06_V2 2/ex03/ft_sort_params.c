/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:29:54 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/19 15:37:12 by jcauchet         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0')
		&& (s1[i] == s2[i]))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

void	print_args(int count, char **vector)
{
	int	i;

	i = 1;
	while (i < count)
	{
		write(1, vector[i], ft_strlen(vector[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	print_args(argc, argv);
}
