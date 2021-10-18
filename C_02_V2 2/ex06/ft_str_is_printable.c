/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:40:40 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:50:26 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int				i;
	unsigned int	non_printable;

	i = 0;
	if (str[i] == '\0')
		return (1);
	non_printable = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 127)))
		{
			non_printable = 1;
		}
		i++;
	}
	if (non_printable)
		return (0);
	else
		return (1);
}
