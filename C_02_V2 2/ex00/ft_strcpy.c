/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:28:03 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/13 08:27:38 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_beginning;

	dest_beginning = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}	
	*dest = '\0';
	return (dest_beginning);
}
