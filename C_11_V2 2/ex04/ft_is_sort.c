/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:41:17 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/30 08:37:13 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	dec;
	int	inc;
	int	i;

	dec = 1;
	inc = 1;
	i = 0;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((f((tab[i]), (tab[i + 1]))) < 0)
			inc++;
		if ((f((tab[i]), (tab[i + 1]))) > 0)
			dec++;
		if ((f((tab[i]), (tab[i + 1]))) == 0)
		{
			dec++;
			inc++;
		}
		i++;
	}
	if (length == inc || length == dec)
		return (1);
	return (0);
}
