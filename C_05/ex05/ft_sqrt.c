/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:43:13 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:01:37 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i \n", ft_sqrt(-4));
	printf("%i \n", ft_sqrt(1));
	printf("%i \n", ft_sqrt(9));
	printf("%i \n", ft_sqrt(25));
	printf("%i \n", ft_sqrt(64));
	printf("%i \n", ft_sqrt(88));
	printf("%i \n", ft_sqrt(100));
}
*/
