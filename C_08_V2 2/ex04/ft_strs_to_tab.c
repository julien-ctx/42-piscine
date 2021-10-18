/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:35:10 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 15:28:57 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duplicated;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	duplicated = malloc(size * sizeof(char));
	if (!duplicated)
		return (0);
	while (src[i])
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			mem;
	int			i;
	t_stock_str	*struct_array;

	mem = (ac + 1) * (sizeof(t_stock_str));
	i = 0;
	struct_array = malloc(mem);
	if (!struct_array)
		return (NULL);
	while (i < ac)
	{
		struct_array[i].size = ft_strlen(av[i]);
		struct_array[i].str = malloc(ft_strlen(av[i]) * sizeof(char) + 1);
		if (!struct_array[i].str)
			return (NULL);
		else
			struct_array[i].str = av[i];
		struct_array[i].copy = ft_strdup(av[i]);
		if (!struct_array[i].copy)
			return (NULL);
		i++;
	}
	struct_array[i].str = 0;
	return (struct_array);
}
