/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:53:59 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/11 10:44:41 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}
