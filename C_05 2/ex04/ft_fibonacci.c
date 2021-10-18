/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:23:52 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/21 16:54:01 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
/*	if (index == 3)
		return (2); */
	else if ( index == 1)
		return (1);
	else if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
	printf("%d", ft_fibonacci(8));
}
