/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:04:24 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/18 11:17:34 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divider;

	divider = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (divider * divider <= nb)
	{
		if (nb % divider == 0)
			return (0);
		divider++;
	}
	return (1);
}
