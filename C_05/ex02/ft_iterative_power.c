/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:34:05 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:20:17 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	value = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (i++ < power)
			value = value * nb;
	return (value);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%i \n", ft_iterative_power(2, 2));
	printf("%i \n", ft_iterative_power(3, 3));
	printf("%i \n", ft_iterative_power(0, 0));
	printf("%i \n", ft_iterative_power(-2, 2));
	return (0);
}
*/
