/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:29:08 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 17:05:08 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	div(int n1, int n2)
{
	int	nb;

	if (n2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	nb = n1 / n2;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (nb);
}
