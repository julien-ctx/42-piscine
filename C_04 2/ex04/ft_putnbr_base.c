/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:30:25 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/23 21:48:08 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	error(char *base)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!base || base_len(base) == 1)
		return (1);
	while (base[i++])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = -1;
	while (base[i++])
	{
		j = i;
		while (base[j++])
		{
			if (base[i] == base[j])
				return (1);
		}
	}
	return (0);
}

void	convertor(int nbr, char *base)
{
	int	len;

	len = base_len(base);
	if (nbr >= len && len >= 2)
	{
		convertor(nbr / len, base);
	}
	if (len >= 2)
		ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (!error(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= (-1);
		}
		convertor(nbr, base);
	}
}

int main()
{
	ft_putnbr_base(322, "poneyvif");
}
