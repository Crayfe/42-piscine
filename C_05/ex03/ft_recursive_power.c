/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:38:56 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:15:35 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("%i \n", ft_recursive_power(0, 0));
	printf("%i \n", ft_recursive_power(2, 3));
        printf("%i \n", ft_recursive_power(10, 0));
        printf("%i \n", ft_recursive_power(3, 3));
	printf("%i \n", ft_recursive_power(2, 3));
	printf("%i \n", ft_recursive_power(-3, 3));
}
*/
