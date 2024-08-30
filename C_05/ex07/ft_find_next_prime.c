/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:58:07 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 16:18:27 by cayuso-f         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	while (!ft_is_prime(next_prime))
		++next_prime;
	return (next_prime);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%i \n", ft_find_next_prime(5));
	printf("%i \n", ft_find_next_prime(10));
	printf("%i \n", ft_find_next_prime(117));
	return (0);
}
*/
