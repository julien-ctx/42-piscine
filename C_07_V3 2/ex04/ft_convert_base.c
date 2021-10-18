/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:42:26 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/30 16:55:38 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_is_error(char *nbr)
{
	int	i;
	int	j;
	
	i = 0;
	if (ft_strlen(nbr) <= 1)
		return (1);
	while(nbr[i])
	{
		if (nbr[i] == ' ' || ((nbr[i] >= 9) && (nbr[i] <= 13))
			|| nbr[i] == '-' || nbr[i] == '+')
		{
			if (nbr[i] == '-' && i == 0)
				continue;
			return (1);
		}
		j = i + 1;
		while (nbr[j])
		{
			if (nbr[i] == nbr[j])
				return (1);
			j++;
		}
	i++;
	}
	return (0);
}

/*char	*convertor(int nbr, char *base)
{	
		
}*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (sign * result);
		else
			result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int	toDeci(char *str, int base)
{
    int len = ft_strlen(str);
    int power = 1; 
    int num = 0; 
    int i;
	
	i = len - 1;
    while (i >= 0)
    {
        if (val(str[i]) >= base)
        {
           return (-1);
        }
        num += val(str[i]) * power;
        power = power * base;
	i++;
    }
    return (num);
}

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void strev(char *str)
{
    int len = ft_strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0; 

    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    strev(res);

    return res;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		mem;
	char	*converted_nbr;
	int		negative;
	int		decimal_nbr;
	negative = 0;
	if (ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (NULL);
	if (ft_is_error(nbr))
		return (0);
	if (nbr[0] == '-')
	{

		negative = 1;
		mem = 1 * sizeof(char);	
	}
	decimal_nbr = toDeci(nbr, ft_strlen(base_from));
	fromDeci(converted_nbr, ft_strlen(base_to), decimal_nbr);
	return (converted_nbr);
}

int main()
{
	printf("%s", ft_convert_base("127", "0123456789", "0123456789ABCDEF"));
}
