/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:16:58 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/11 16:11:47 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	beginning(int x)
{
	int	i;

	i = 0;
	ft_putchar('A');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	content(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x == 0 || y == 0)
	{
		return ;
	}	
	if (x < 0)
	{
		x *= (-1);
	}	
	if (y < 0)
	{
		y *= (-1);
	}
	beginning(x);
	while (i < y - 2)
	{
		content(x);
		i++;
	}
	beginning(x);
}
