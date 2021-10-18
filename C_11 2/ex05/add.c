/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:13:28 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 16:19:37 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	add(int n1, int n2)
{
	int	nb;

	nb = n1 + n2;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (nb);
}