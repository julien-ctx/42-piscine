/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:40:34 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/22 17:58:07 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
