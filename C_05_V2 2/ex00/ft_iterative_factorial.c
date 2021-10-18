/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:43:13 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/17 19:46:13 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	iteration;
	int	factorial;

	iteration = nb;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (iteration >= 1)
	{
		factorial = factorial * iteration;
		iteration--;
	}
	return (factorial);
}
