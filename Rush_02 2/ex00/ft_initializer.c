/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:23:03 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:07:51 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	count_char(char *file)
{
	int	file_name;
	int	i;
	int	j;

	i = 0;
	j = 0;
	file_name = open(file, O_RDONLY);
	while (read(file_name, &i, 1 ))
		j++;
	return (j);
}

char	*copied_char(char *file)
{
	char	*copied_char;
	int		size;
	int		i;
	int		j;
	int		file_name;

	i = 0;
	j = 0;
	size = count_char(file) + 1;
	copied_char = malloc(size * sizeof(char));
	file_name = open(file, O_RDONLY);
	while (read(file_name, &i, 1))
	{
		copied_char[j] = i++;
		j++;
	}
	copied_char[j] = '\0';
	return (copied_char);
}
