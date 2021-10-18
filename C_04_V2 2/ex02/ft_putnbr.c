/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:24:05 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/16 11:06:49 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	minimum(void)
{
	int		i;

	i = 0;
	write(1, "-2147483648", 11);
}	

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		minimum();
		return ;
	}
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
	}
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
