/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:36:38 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 17:18:56 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	mod(int n1, int n2)
{
	int	nb;

	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	nb = n1 % n2;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (nb);
}
