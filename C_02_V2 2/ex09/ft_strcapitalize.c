/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:17:04 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 11:02:30 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str, int i)
{
	if ((str[i] >= 97) && (str[i] <= 122))
		str[i] -= 32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	ft_strupcase(str, i);
	while (str[i] != '\0')
	{
		j = i;
		while (!((str[j] >= 48 && str[j] <= 57)
				|| (str[j] >= 65 && str[j] <= 90)
				|| (str[j] >= 97 && str[j] <= 122)))
		{
			j++;
			ft_strupcase(str, j);
		}
		i++;
	}
	return (str);
}
