/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:13:09 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 21:30:06 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nb_count(long long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(long long nb)
{
	long long		len;
	char			*converted_nb;

	len = nb_count(nb);
	converted_nb = malloc ((len + 1) * sizeof(char));
	if (nb < 0)
	{
		nb = -nb;
		converted_nb[0] = '-';
		converted_nb[len + 1] = '\0';
	}
	else
	{
		converted_nb[len] = '\0';
		len--;
	}
	while (0 != nb)
	{
		converted_nb[len] = nb % 10 + 48;
		len--;
		nb /= 10;
	}
	return (converted_nb);
}
