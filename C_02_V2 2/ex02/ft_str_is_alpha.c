/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 09:49:00 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:38:36 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int				i;
	unsigned int	non_alphabetic;

	i = 0;
	if (str[i] == '\0')
		return (1);
	non_alphabetic = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
		{
			non_alphabetic = 1;
		}
		i++;
	}
	if (non_alphabetic)
		return (0);
	else
		return (1);
}
