/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:50:05 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/18 14:11:19 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return ((int)i);
	else
		return (0);
}
