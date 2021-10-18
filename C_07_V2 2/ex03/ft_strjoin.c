/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:15:18 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/20 20:00:00 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concate(int size, char **strs, char *sep, char *array)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			array[k++] = strs[i][j++];
		if (i + 1 != size)
		{
			l = 0;
			while (sep[l])
				array[k++] = sep[l++];
		}
		i++;
	}
	array[k] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_array;
	char	*array;
	int		allocation;
	int		i;

	empty_array[0] = '\0';
	allocation = 0;
	i = 0;
	if (size <= 0)
		return (empty_array);
	while (i < size)
	{
		allocation = allocation + ft_strlen(strs[i]);
		i++;
	}
	allocation = allocation + ft_strlen(sep) * (size - 1) + 1;
	array = malloc(allocation * sizeof(char));
	if (!array)
		return (0);
	array = ft_concate(size, strs, sep, array);
	return (array);
}
