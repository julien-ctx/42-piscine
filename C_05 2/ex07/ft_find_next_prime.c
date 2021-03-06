/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:09:07 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/18 11:20:48 by jcauchet         ###   ########.fr       */
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


int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb--);
}
