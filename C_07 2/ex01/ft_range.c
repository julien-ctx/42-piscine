/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:43:04 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/20 20:10:02 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	difference;
	int	i;
	int	*array;

	difference = max - min;
	i = 0;
	if (min >= max)
		return (0);
	array = malloc(difference * sizeof(int));
	if (!array)
		return (0);
	while (i < difference)
		array[i++] = min++;
	return (array);
}
