/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:13:49 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:41:08 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	i = nb;
	fac = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (i > 1)
			fac = fac * i--;
	return (fac);
}
/*
#include <stdio.h>
int main()
{
	printf("%i \n", ft_iterative_factorial(0));
	printf("%i \n", ft_iterative_factorial(-5));
	printf("%i \n", ft_iterative_factorial(5));
}
*/
