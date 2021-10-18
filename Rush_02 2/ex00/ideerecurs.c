/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ideerecurs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:11:00 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 21:09:31 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* L'idee est de pouvoir si le chiffre donne 
 * n'est pas parfaitement correspondant a un du dico, 
 * le diviser afin de pouvoir l'afficher en fonction imprimable.
 * En fonction recursive, s'adapte a tt les dicos
 
#include <stdlib.h>

int	ft_strlen(char *str);

void	ft_last_word(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (str[len] != ':')
		len--;
	len++;
	while (str[len] == ' ')
		len ++;
	while (str[len] >= 32 && str[len] <= 127)
	{
		write(1, &str[len], 1);
		len++;
	}
	write(1, "\n", 1);
}

int	nb_count(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(long long nb)
{
	long long		len;
	char			*converted_nb;

	len = nb_count(nb);
	converted_nb = malloc ((len + 1) * sizeof(char));
	if (nb < 0)
	{
		nb = -nb;
		converted_nb[0] = '-';
		converted_nb[len + 1] = '\0';
	}
	else
	{
		converted_nb[len] = '\0';
		len--;
	}
	while (0 != nb)
	{
		converted_nb[len] = nb % 10 + 48;
		len--;
		nb /= 10;
	}
	return (converted_nb);
}

int	*ft_tab(unsigned int nb)
{
	int	*tab
	int	i;

	i = 0;
	*tab = maloc(16);
	while (nb / 1000 != 0)
	{
		tab[i++] = nb % 1000;
		nb = nb / 1000;
	}
	tab[i++] = nb % 1000;
	while (i < 4)
		tab[i++] = 0;
	return (tab);
}

char	**tab_char(int *tab)
{
	char	**ret_tab;
	int		i;

	i = 0;
	ret_tab = malloc(2999);
	while (i < 4)
	{
		ret_tab[i] = ft_itoa(tab[i]);
		i++;
	}
	return (ret_tab);
}

void	ft_printer(char	*tab)
{
	int	i;

	if (tab[0] == '0' && tab[1] == '0' && tab[2] == '0')
		return ;
	if (tab[0] == '0' && tab[1] < '2')
	{
		ft_last_word(tab);
		return ;
	}
}

int	main(void)
{
	int		i;
	int		*tab;
	char	**c_tab;

	**c_tab = malloc (2999);
	*tab = malloc(16);
	i = 0;
	tab = ft_tab(6543542);
	c_tab = tab_char(tab);
	while (i < 4)
	{
		printf("%s\n", c_tab[i++]);
	}
}*/
