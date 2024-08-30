/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:41:07 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/25 16:56:10 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int 	i;

	size = max - min;
	if (size <= 0)
		return (0);
	else
	{
		array = (int *)malloc(sizeof(int) * (size));
		if (!array)
			return (0);
		i = 0;
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
	}
	return (array);
}

#include <stdio.h>
int	main()
{
	int	*array;
	int	i;

	i = 0;
	array = ft_range(-5, 5);
	while (i < 10)
		printf("%i \n", array[i++]);
}
