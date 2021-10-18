/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:50:42 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/14 18:54:24 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (!(ft_strlen(dest) > size))
		dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
