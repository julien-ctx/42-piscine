/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:57:59 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/22 22:02:51 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	difference;
	int	i;
	int	*array;

	difference = max - min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	array = malloc(difference * sizeof(int));
	if (!array)
		return (-1);
	while (i < difference)
		array[i++] = min++;
	*range = array;
	return (difference);
}

int main()
{
	int **test;
	printf("%d", ft_ultimate_range(test, 5, 3));
}
