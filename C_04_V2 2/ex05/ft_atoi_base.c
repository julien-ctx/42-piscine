/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:36:27 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/24 12:05:40 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (sign * result);
		else
			result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

int	convertor(int nbr, char *base)
{
	int	len;
	int converted = 0;

	len = ft_strlen(base);
	if (nbr >= len && len >= 2)
		convertor(nbr / len, base);
	if (len >= 2)
		converted = (base[nbr % len] - 48);
	return converted;
}

int	ft_atoi_base(char *str, char *base)
{
	int nbr;
	
	nbr = ft_atoi(str);
	int converted = convertor(nbr, "0123456789");
	return (converted);
}

int main()
{
	printf("%d", ft_atoi_base("22", "0123456789ABCDEF"));
}
