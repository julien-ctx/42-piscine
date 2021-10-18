/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:24:35 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 13:44:02 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hexa(int i, int division, int remainder, char *str)
{
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			division = str[i] / 16;
			if (str[i] < 16 && str[i] > 9)
				remainder = str[i] - 10;
			else
				remainder = str[i] % 16;
			ft_putchar(92);
			ft_putchar(division + 48);
			if (remainder > 9 || (str[i] < 16 && str[i] > 9))
				ft_putchar(remainder + 97);
			else
				ft_putchar(remainder + 48);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	division;
	int	remainder;

	i = 0;
	division = 0;
	remainder = 0;
	print_hexa(i, division, remainder, str);
}
