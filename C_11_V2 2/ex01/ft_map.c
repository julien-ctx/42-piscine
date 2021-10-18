/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:22:39 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 22:10:10 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_array;

	new_array = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		new_array[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < length)
	{
		new_array[i] = f(new_array[i]);
		i++;
	}
	return (new_array);
}
