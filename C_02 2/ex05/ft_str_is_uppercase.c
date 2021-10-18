/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:34:49 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:49:12 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int				i;
	unsigned int	non_uppercase;

	i = 0;
	if (str[i] == '\0')
		return (1);
	non_uppercase = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)))
		{
			non_uppercase = 1;
		}
		i++;
	}
	if (non_uppercase)
		return (0);
	else
		return (1);
}
