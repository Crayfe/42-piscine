/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:46:36 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:06:29 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main()
{	
	printf("%i \n", ft_fibonacci(-12));
	printf("%i \n", ft_fibonacci(12));
	return (0);
}
*/
