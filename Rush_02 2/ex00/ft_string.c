/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:56:37 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:05:44 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*copied_char(char *file);
char	**ft_split(char *str, char *charset);
char	*ft_strstr(char *str, char *to_find);
void	ft_last_word(char *str);

char	**line_array(char *file)
{
	char	**array;

	array = ft_split(copied_char(file), "\n");
	return (array);
}

int	ft_find_string(char **array, char *to_find)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		if (ft_strstr(array[i], to_find) != 0)
		{
			ft_last_word(array[i]);
			return (1);
		}
		i++;
	}
	return (0);
}
