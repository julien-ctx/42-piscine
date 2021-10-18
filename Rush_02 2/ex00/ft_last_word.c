/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:01:29 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:12:34 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
