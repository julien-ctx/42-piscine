/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:11:27 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/24 11:34:29 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_is_error(char *nbr)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(nbr) <= 1)
		return (1);
	while(nbr[i])
	{
		if (nbr[i] == ' ' || ((nbr[i] >= 9) && (nbr[i] <= 13))
			|| nbr[i] == '-' || nbr[i] == '+')
		{
			if (nbr[i] == '-' && i == 0)
				continue;
			return (1);
		}
		j = i + 1;
		while (nbr[j])
		{
			if (nbr[i] == nbr[j])
				return (1);
			j++;
		}
	i++;
	}
	return (0);
}


