/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:41:17 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 23:41:41 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_increasing(int *tab, int length, int (*f)(int, int))
{	
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if ((f((tab[i]), (tab[j]))) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_decreasing(int *tab, int length, int (*f)(int, int))
{	
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if ((f((tab[i]), (tab[j]))) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (f((tab[0]), (tab[1])) < 0)
	{
		if (!check_increasing(tab, length, f))
			return (0);
	}
	if (f((tab[0]), (tab[1])) > 0)
	{
		if (!check_decreasing(tab, length, f))
			return (0);
	}
	return (1);
}
