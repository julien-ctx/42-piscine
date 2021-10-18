/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:16:58 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/11 16:06:36 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	beginning(int x)
{
	int	i;

	i = 0;
	ft_putchar('/');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar(92);
	}
	ft_putchar('\n');
}

void	content(int x)
{
	int	i;

	i = 0;
	ft_putchar('*');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ending(int x)
{
	int	i;

	i = 0;
	ft_putchar(92);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
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
	ending(x);
}
