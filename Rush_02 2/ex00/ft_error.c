/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:03:03 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:10:50 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

long long	custom_atoi(char *str);
int			ft_strcmp(char *s1, char *s2);

int	ft_error(char *str)
{
	long long	converted_number;

	converted_number = custom_atoi(str);
	if (converted_number == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
