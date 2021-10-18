/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:14:45 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:44:47 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int				i;
	unsigned int	non_numeric;

	i = 0;
	if (str[i] == '\0')
		return (1);
	non_numeric = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
		{
			non_numeric = 1;
		}
		i++;
	}
	if (non_numeric)
		return (0);
	else
		return (1);
}
