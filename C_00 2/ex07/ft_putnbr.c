/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:35:55 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/16 17:58:37 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	power(int n)
{
	int	i;
	int	resultat;

	if (n == 0)
		return (1);
	i = 1;
	resultat = 10;
	while (i < n)
	{
		resultat *= 10;
		i++;
	}
	return (resultat);
}

int	find_size(int nb)
{
	int	n;
	int	verif;

	n = 0;
	if (nb < 0)
		nb *= (-1);
	verif = nb / power(n);
	while (verif > 9)
	{
		n++;
		verif = nb / power(n);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int		size;
	int		number;
	char	c_number;

	size = find_size(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	while (size >= 0)
	{
		number = nb / power(size);
		number = number % 10;
		size--;
		c_number = number + 48;
		write(1, &c_number, 1);
	}
}
