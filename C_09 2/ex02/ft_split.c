/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:44:14 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/29 19:28:41 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checker(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	word_count;
	int	init;

	i = 0;
	init = 0;
	word_count = 0;
	while (str[i])
	{
		if (checker(str[i], charset))
			init = 0;
		else if (!init)
		{
			word_count++;
			init = 1;
		}
		i++;
	}
	return (word_count);
}

int	word_strlen(int pos, char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (checker(str[pos], charset))
		pos++;
	while (!checker(str[pos], charset) && str[pos])
	{
		len++;
		pos++;
	}
	return (len);
}

int	ft_strcpy(int pos, char *str, char *charset, char *split_array)
{
	int	j;

	j = 0;
	while (checker(str[pos], charset) && str[pos])
		pos++;
	while (!checker(str[pos], charset) && str[pos])
	{
		split_array[j] = str[pos];
		j++;
		pos++;
	}
	split_array[j] = '\0';
	return (pos);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_array;
	int		array_size;
	int		i;
	int		pos;
	int		word_len;

	array_size = word_count(str, charset) + 1;
	split_array = malloc (array_size * sizeof(char *));
	if (!split_array)
		return (NULL);
	i = 0;
	pos = 0;
	while ((i < array_size) && str[pos])
	{
		word_len = word_strlen(pos, str, charset);
		split_array[i] = malloc((word_len + 1) * sizeof(char));
		if (array_size == 1)
			break ;
		pos = ft_strcpy(pos, str, charset, split_array[i]);
		i++;
	}
	split_array[i] = NULL;
	return (split_array);
}

int main()
{
	char **array = ft_split(" gh  ", "");
	int i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
