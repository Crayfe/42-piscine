/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:47:17 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 16:13:50 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	while (i <= nb / 2)
		if (nb % i++ == 0)
			return (0);
	return (1);
}
/*
#include <stdio.h>
int main ()
{
	printf("1:%i \n", ft_is_prime(1));
	printf("2:%i \n", ft_is_prime(-2));
	printf("3:%i \n", ft_is_prime(3));
	printf("4:%i \n", ft_is_prime(-4));
	printf("5:%i \n", ft_is_prime(5));
	printf("6:%i \n", ft_is_prime(6));
	printf("7:%i \n", ft_is_prime(5));
	return (0);
}
*/
