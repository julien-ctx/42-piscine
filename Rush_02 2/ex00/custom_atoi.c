/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:11:40 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:12:00 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_atoi_check(char *str)
{
	unsigned long long		result;

	result = 0;
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (result);
		else
		{
			result = result * 10 + *str - 48;
			if (result > 4294967295)
				return (-1);
		}
		str++;
	}
	return (result);
}

long long	custom_atoi(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	if (!(str[i] >= 48 && str[i] <= 57))
		return (-1);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1), i++;
	}
	if (str[i] == '0' && str[i + 1] == '\0')
		return (0);
	if (sign == -1)
		return (-1);
	if (ft_atoi_check(&str[i]) == -1)
		return (-1);
	else
		return (ft_atoi_check(&str[i]));
}
