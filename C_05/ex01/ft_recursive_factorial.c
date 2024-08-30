/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:22:41 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:43:11 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("%i \n", ft_recursive_factorial(5));
	printf("%i \n", ft_recursive_factorial(0));
	printf("%i \n", ft_recursive_factorial(1));
	printf("%i \n", ft_recursive_factorial(-5));
}
*/
