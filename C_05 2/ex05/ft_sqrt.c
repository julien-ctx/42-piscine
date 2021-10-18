/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:50:05 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/18 13:53:03 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	b;
	int	i;
	int	previous_i;

	a = 0;
	b = nb;
	i = (a + b) / 2;
	previous_i = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i != previous_i)
	{
		if (i * i > nb)
			b = i;
		else if (i * i < nb)
			a = i;
		else
			return (i);
		previous_i = i;
		i = (a + b) / 2;
	}
	return (0);
}
