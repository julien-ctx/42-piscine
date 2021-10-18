/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:23:56 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:46:50 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int				i;
	unsigned int	non_lowercase;

	i = 0;
	if (str[i] == '\0')
		return (1);
	non_lowercase = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)))
		{
			non_lowercase = 1;
		}
		i++;
	}
	if (non_lowercase)
		return (0);
	else
		return (1);
}
